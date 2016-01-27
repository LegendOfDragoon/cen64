//
// device/sha1_sums.h: Known good SHA1 sums
//
// CEN64: Cycle-Accurate Nintendo 64 Emulator.
// Copyright (C) 2015, Tyler J. Stachecki.
//
// This file is subject to the terms and conditions defined in
// 'LICENSE', which is part of this source code package.
//

#ifndef __SHA1_SUMS_H__
#define __SHA1_SUMS_H__

const uint8_t sha1_pifrom_ntsc[SHA1_SIZE] = {
  0x91, 0x74, 0xea, 0xdc, 0x0f, 0x0e, 0xa2, 0x65, 0x4c, 0x95,
  0xfd, 0x94, 0x14, 0x06, 0xab, 0x46, 0xb9, 0xdc, 0x9b, 0xdd,
};

const uint8_t sha1_pifrom_pal[SHA1_SIZE] = {
  0x46, 0xca, 0xe5, 0x9d, 0x31, 0xf9, 0x29, 0x8b, 0x93, 0xf3,
  0x38, 0x08, 0x79, 0x45, 0x4f, 0xce, 0xf5, 0x4e, 0xe6, 0xcc,
};

const uint8_t sha1_dd_ipl[SHA1_SIZE] = {
  0xbf, 0x86, 0x19, 0x22, 0xdc, 0xb7, 0x8c, 0x31, 0x63, 0x60,
  0xe3, 0xe7, 0x42, 0xf4, 0xf7, 0x0f, 0xf6, 0x3c, 0x9b, 0xc3,
};

#endif
