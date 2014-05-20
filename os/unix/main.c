//
// os/unix/main.c
//
// Entry point for Unix
//
// This file is subject to the terms and conditions defined in
// 'LICENSE', which is part of this source code package.
//

#include "device.h"
#include <pthread.h>

void cen64_cleanup(struct cen64_device *device);
int cen64_main(struct cen64_device *device, int argc, const char *argv[]);
static void *cen64_thread(void *opaque);

struct cen64_args {
  struct cen64_device *device;
  const char **argv;
  int argc;
};

void *cen64_thread(void *opaque) {
  struct cen64_args *args = (struct cen64_args *) opaque;

  cen64_main(args->device, args->argc, args->argv);
  return NULL;
}

int main(int argc, const char *argv[]) {
  struct cen64_device device;
  struct cen64_args args = {&device, argv, argc};
  pthread_t device_thread;

  /* Create a thread, wait for it to terminate. */
  pthread_create(&device_thread, NULL, cen64_thread, &args);
  pthread_join(device_thread, NULL);

  /* Allow ourselves to clean up. */
  cen64_cleanup(&device);
  return 0;
}
