/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#ifndef _DATA_HW_ROUNDEDPATTERN_H_
#define _DATA_HW_ROUNDEDPATTERN_H_

#define ROUND_CORNER_H_TOP 158
#define ROUND_CORNER_H_BOT 158

static unsigned char top_rc_pattern[] = {
	0x72, 0x0, 0x31, 0x1, 0xc6, 0x3, 0x38, 0x4, 0x31, 0x0, 0xea, 0xe5, 0xde, 0xd5, 0xcb, 0xc2, 0xb4, 0xac, 0xa7, 0x9f, 0x99, 0x93, 0x8b, 0x80, 0x79, 0x72, 0x65, 0x60, 0x59, 0x51, 0x49, 0x42, 0x3c, 0x36, 0x2c, 0x21, 0x1f, 0x19, 0x11, 0xe, 0xd, 0xa, 0x4, 0x3, 0x4, 0x3, 0x2, 0x4, 0x4, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x2, 0x2, 0x2, 0x2, 0x3, 0x3, 0x4, 0x4, 0x2, 0x3, 0x4, 0x3, 0x4, 0xa, 0xd, 0xe, 0x11, 0x19, 0x1f, 0x21, 0x2c, 0x36, 0x3c, 0x42, 0x49, 0x51, 0x59, 0x60, 0x65, 0x72, 0x79, 0x80, 0x8b, 0x93, 0x99, 0x9f, 0xa7, 0xac, 0xb4, 0xc2, 0xcb, 0xd5, 0xde, 0xe5, 0xea,
	0x66, 0x0, 0x25, 0x1, 0xd2, 0x3, 0x38, 0x4, 0x25, 0x0, 0xf1, 0xe9, 0xe0, 0xd5, 0xc9, 0xb8, 0xaa, 0x9d, 0x90, 0x82, 0x73, 0x69, 0x60, 0x56, 0x4b, 0x42, 0x39, 0x30, 0x2a, 0x24, 0x1c, 0x1d, 0x19, 0x17, 0x14, 0x10, 0xe, 0xc, 0xb, 0x7, 0x5, 0x3, 0x1, 0x2, 0x3, 0x3, 0x1, 0x1, 0x3, 0x3, 0x2, 0x1, 0x3, 0x5, 0x7, 0xb, 0xc, 0xe, 0x10, 0x14, 0x17, 0x19, 0x1d, 0x1c, 0x24, 0x2a, 0x30, 0x39, 0x42, 0x4b, 0x56, 0x60, 0x69, 0x73, 0x82, 0x90, 0x9d, 0xaa, 0xb8, 0xc9, 0xd5, 0xe0, 0xe9, 0xf1,
	0x5e, 0x0, 0x21, 0x1, 0xda, 0x3, 0x38, 0x4, 0x21, 0x0, 0xf3, 0xe9, 0xda, 0xc6, 0xaf, 0x97, 0x82, 0x72, 0x68, 0x5d, 0x52, 0x46, 0x3b, 0x30, 0x28, 0x1f, 0x18, 0x14, 0xc, 0x6, 0x3, 0x2, 0x3, 0x2, 0x2, 0x1, 0x1, 0x2, 0x2, 0x2, 0x2, 0x2, 0x1, 0x1, 0x2, 0x2, 0x2, 0x2, 0x2, 0x1, 0x1, 0x2, 0x2, 0x3, 0x2, 0x3, 0x6, 0xc, 0x14, 0x18, 0x1f, 0x28, 0x30, 0x3b, 0x46, 0x52, 0x5d, 0x68, 0x72, 0x82, 0x97, 0xaf, 0xc6, 0xda, 0xe9, 0xf3,
	0x58, 0x0, 0x13, 0x1, 0xe0, 0x3, 0x38, 0x4, 0x13, 0x0, 0xed, 0xdb, 0xc1, 0xa4, 0x85, 0x6b, 0x59, 0x4e, 0x41, 0x32, 0x25, 0x1e, 0x1b, 0x16, 0x12, 0xe, 0xa, 0x6, 0x2, 0x2, 0x6, 0xa, 0xe, 0x12, 0x16, 0x1b, 0x1e, 0x25, 0x32, 0x41, 0x4e, 0x59, 0x6b, 0x85, 0xa4, 0xc1, 0xdb, 0xed,
	0x53, 0x0, 0x11, 0x1, 0xe5, 0x3, 0x38, 0x4, 0x11, 0x0, 0xea, 0xd5, 0xb7, 0x8f, 0x72, 0x62, 0x52, 0x40, 0x31, 0x26, 0x22, 0x1c, 0x17, 0x12, 0xd, 0x7, 0x3, 0x3, 0x7, 0xd, 0x12, 0x17, 0x1c, 0x22, 0x26, 0x31, 0x40, 0x52, 0x62, 0x72, 0x8f, 0xb7, 0xd5, 0xea,
	0x4e, 0x0, 0xe, 0x1, 0xea, 0x3, 0x38, 0x4, 0xe, 0x0, 0xf6, 0xdc, 0xbb, 0x91, 0x6b, 0x55, 0x43, 0x32, 0x1f, 0x17, 0x12, 0xd, 0x7, 0x3, 0x3, 0x7, 0xd, 0x12, 0x17, 0x1f, 0x32, 0x43, 0x55, 0x6b, 0x91, 0xbb, 0xdc, 0xf6,
	0x4a, 0x0, 0x8, 0x1, 0xee, 0x3, 0x38, 0x4, 0x8, 0x0, 0xf6, 0xd6, 0xad, 0x7c, 0x4e, 0x31, 0x1d, 0x9, 0x9, 0x1d, 0x31, 0x4e, 0x7c, 0xad, 0xd6, 0xf6,
	0x47, 0x0, 0x7, 0x1, 0xf1, 0x3, 0x38, 0x4, 0x7, 0x0, 0xe8, 0xbc, 0x88, 0x55, 0x35, 0x20, 0xc, 0xc, 0x20, 0x35, 0x55, 0x88, 0xbc, 0xe8,
	0x44, 0x0, 0x7, 0x1, 0xf4, 0x3, 0x38, 0x4, 0x7, 0x0, 0xea, 0xba, 0x7d, 0x47, 0x27, 0x10, 0x1, 0x1, 0x10, 0x27, 0x47, 0x7d, 0xba, 0xea,
	0x41, 0x0, 0x6, 0x1, 0xf7, 0x3, 0x38, 0x4, 0x6, 0x0, 0xef, 0xc2, 0x85, 0x4a, 0x25, 0xb, 0xb, 0x25, 0x4a, 0x85, 0xc2, 0xef,
	0x3e, 0x0, 0x6, 0x1, 0xfa, 0x3, 0x38, 0x4, 0x6, 0x0, 0xfd, 0xd4, 0x96, 0x55, 0x2a, 0xe, 0xe, 0x2a, 0x55, 0x96, 0xd4, 0xfd,
	0x3c, 0x0, 0x6, 0x1, 0xfc, 0x3, 0x38, 0x4, 0x6, 0x0, 0xf2, 0xbd, 0x75, 0x39, 0x15, 0x1, 0x1, 0x15, 0x39, 0x75, 0xbd, 0xf2,
	0x3a, 0x0, 0x5, 0x1, 0xfe, 0x3, 0x38, 0x4, 0x5, 0x0, 0xe7, 0xa9, 0x5d, 0x28, 0x8, 0x8, 0x28, 0x5d, 0xa9, 0xe7,
	0x38, 0x0, 0x5, 0x1, 0x0, 0x4, 0x38, 0x4, 0x5, 0x0, 0xe1, 0x99, 0x4d, 0x1c, 0x2, 0x2, 0x1c, 0x4d, 0x99, 0xe1,
	0x36, 0x0, 0x4, 0x1, 0x2, 0x4, 0x38, 0x4, 0x4, 0x0, 0xe2, 0x9a, 0x49, 0x14, 0x14, 0x49, 0x9a, 0xe2,
	0x34, 0x0, 0x4, 0x1, 0x4, 0x4, 0x38, 0x4, 0x4, 0x0, 0xe5, 0x9d, 0x4b, 0x14, 0x14, 0x4b, 0x9d, 0xe5,
	0x32, 0x0, 0x4, 0x1, 0x6, 0x4, 0x38, 0x4, 0x4, 0x0, 0xee, 0xa7, 0x52, 0x15, 0x15, 0x52, 0xa7, 0xee,
	0x30, 0x0, 0x4, 0x1, 0x8, 0x4, 0x38, 0x4, 0x4, 0x0, 0xf9, 0xba, 0x60, 0x1c, 0x1c, 0x60, 0xba, 0xf9,
	0x2f, 0x0, 0x4, 0x1, 0x9, 0x4, 0x38, 0x4, 0x4, 0x0, 0xd4, 0x7b, 0x2a, 0x2, 0x2, 0x2a, 0x7b, 0xd4,
	0x2d, 0x0, 0x4, 0x1, 0xb, 0x4, 0x38, 0x4, 0x4, 0x0, 0xf0, 0xa2, 0x44, 0x8, 0x8, 0x44, 0xa2, 0xf0,
	0x2b, 0x0, 0x4, 0x1, 0xd, 0x4, 0x38, 0x4, 0x4, 0x0, 0xfe, 0xcb, 0x6c, 0x1a, 0x1a, 0x6c, 0xcb, 0xfe,
	0x2a, 0x0, 0x4, 0x1, 0xe, 0x4, 0x38, 0x4, 0x4, 0x0, 0xef, 0x9d, 0x3d, 0x4, 0x4, 0x3d, 0x9d, 0xef,
	0x29, 0x0, 0x3, 0x1, 0xf, 0x4, 0x38, 0x4, 0x3, 0x0, 0xd2, 0x6f, 0x18, 0x18, 0x6f, 0xd2,
	0x27, 0x0, 0x4, 0x1, 0x11, 0x4, 0x38, 0x4, 0x4, 0x0, 0xfa, 0xb2, 0x4a, 0x4, 0x4, 0x4a, 0xb2, 0xfa,
	0x26, 0x0, 0x3, 0x1, 0x12, 0x4, 0x38, 0x4, 0x3, 0x0, 0xed, 0x90, 0x29, 0x29, 0x90, 0xed,
	0x25, 0x0, 0x3, 0x1, 0x13, 0x4, 0x38, 0x4, 0x3, 0x0, 0xd9, 0x71, 0x11, 0x11, 0x71, 0xd9,
	0x24, 0x0, 0x3, 0x1, 0x14, 0x4, 0x38, 0x4, 0x3, 0x0, 0xc6, 0x58, 0x5, 0x5, 0x58, 0xc6,
	0x22, 0x0, 0x4, 0x1, 0x16, 0x4, 0x38, 0x4, 0x4, 0x0, 0xfd, 0xb5, 0x44, 0x1, 0x1, 0x44, 0xb5, 0xfd,
	0x21, 0x0, 0x3, 0x1, 0x17, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf9, 0xa4, 0x32, 0x32, 0xa4, 0xf9,
	0x20, 0x0, 0x3, 0x1, 0x18, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf1, 0x93, 0x23, 0x23, 0x93, 0xf1,
	0x1f, 0x0, 0x3, 0x1, 0x19, 0x4, 0x38, 0x4, 0x3, 0x0, 0xec, 0x85, 0x17, 0x17, 0x85, 0xec,
	0x1e, 0x0, 0x3, 0x1, 0x1a, 0x4, 0x38, 0x4, 0x3, 0x0, 0xec, 0x81, 0x11, 0x11, 0x81, 0xec,
	0x1d, 0x0, 0x3, 0x1, 0x1b, 0x4, 0x38, 0x4, 0x3, 0x0, 0xed, 0x82, 0x10, 0x10, 0x82, 0xed,
	0x1c, 0x0, 0x3, 0x1, 0x1c, 0x4, 0x38, 0x4, 0x3, 0x0, 0xee, 0x82, 0x10, 0x10, 0x82, 0xee,
	0x1b, 0x0, 0x3, 0x1, 0x1d, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf1, 0x86, 0x11, 0x11, 0x86, 0xf1,
	0x1a, 0x0, 0x3, 0x1, 0x1e, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf8, 0x91, 0x17, 0x17, 0x91, 0xf8,
	0x19, 0x0, 0x3, 0x1, 0x1f, 0x4, 0x38, 0x4, 0x3, 0x0, 0xfc, 0xa0, 0x21, 0x21, 0xa0, 0xfc,
	0x18, 0x0, 0x3, 0x1, 0x20, 0x4, 0x38, 0x4, 0x3, 0x0, 0xfe, 0xaf, 0x2d, 0x2d, 0xaf, 0xfe,
	0x18, 0x0, 0x2, 0x1, 0x20, 0x4, 0x38, 0x4, 0x2, 0x0, 0xbf, 0x3d, 0x3d, 0xbf,
	0x17, 0x0, 0x2, 0x1, 0x21, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd6, 0x53, 0x53, 0xd6,
	0x16, 0x0, 0x3, 0x1, 0x22, 0x4, 0x38, 0x4, 0x3, 0x0, 0xeb, 0x6d, 0x3, 0x3, 0x6d, 0xeb,
	0x15, 0x0, 0x3, 0x1, 0x23, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf9, 0x8c, 0xf, 0xf, 0x8c, 0xf9,
	0x15, 0x0, 0x2, 0x2, 0x62, 0x0, 0xdc, 0x0, 0x4, 0x4, 0x23, 0x4, 0x38, 0x4, 0x2, 0x0, 0xab, 0x26, 0xd, 0x3b, 0x66, 0x8c, 0x8c, 0x66, 0x3b, 0xd, 0x26, 0xab,
	0x14, 0x0, 0x2, 0x2, 0x5e, 0x0, 0xe0, 0x0, 0x3, 0x3, 0x24, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd0, 0x46, 0x1a, 0x66, 0xbf, 0xbf, 0x66, 0x1a, 0x46, 0xd0,
	0x13, 0x0, 0x3, 0x2, 0x5b, 0x0, 0xe3, 0x0, 0x2, 0x2, 0x25, 0x4, 0x38, 0x4, 0x3, 0x0, 0xee, 0x6f, 0x4, 0x33, 0xa6, 0xa6, 0x33, 0x4, 0x6f, 0xee,
	0x12, 0x0, 0x3, 0x2, 0x59, 0x0, 0xe5, 0x0, 0x2, 0x2, 0x26, 0x4, 0x38, 0x4, 0x3, 0x0, 0xfe, 0x9e, 0x18, 0x33, 0xa8, 0xa8, 0x33, 0x18, 0x9e, 0xfe,
	0x12, 0x0, 0x2, 0x2, 0x57, 0x0, 0xe7, 0x0, 0x2, 0x2, 0x26, 0x4, 0x38, 0x4, 0x2, 0x0, 0xcd, 0x3f, 0x21, 0x8c, 0x8c, 0x21, 0x3f, 0xcd,
	0x11, 0x0, 0x3, 0x2, 0x55, 0x0, 0xe9, 0x0, 0x1, 0x1, 0x27, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf2, 0x70, 0x5, 0x61, 0x61, 0x5, 0x70, 0xf2,
	0x11, 0x0, 0x2, 0x2, 0x54, 0x0, 0xea, 0x0, 0x2, 0x2, 0x27, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa5, 0x1c, 0x8, 0x8f, 0x8f, 0x8, 0x1c, 0xa5,
	0x10, 0x0, 0x2, 0x2, 0x53, 0x0, 0xeb, 0x0, 0x2, 0x2, 0x28, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd7, 0x47, 0xf, 0xb3, 0xb3, 0xf, 0x47, 0xd7,
	0xf, 0x0, 0x3, 0x2, 0x52, 0x0, 0xec, 0x0, 0x2, 0x2, 0x29, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf9, 0x7f, 0x9, 0xf, 0xbf, 0xbf, 0xf, 0x9, 0x7f, 0xf9,
	0xf, 0x0, 0x2, 0x2, 0x51, 0x0, 0xed, 0x0, 0x2, 0x2, 0x29, 0x4, 0x38, 0x4, 0x2, 0x0, 0xbe, 0x2e, 0xd, 0xbf, 0xbf, 0xd, 0x2e, 0xbe,
	0xe, 0x0, 0x3, 0x2, 0x50, 0x0, 0xee, 0x0, 0x2, 0x2, 0x2a, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf3, 0x68, 0x3, 0xa, 0xa6, 0xa6, 0xa, 0x3, 0x68, 0xf3,
	0xe, 0x0, 0x2, 0x2, 0x4f, 0x0, 0xef, 0x0, 0x1, 0x1, 0x2a, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb2, 0x22, 0x8c, 0x8c, 0x22, 0xb2,
	0xd, 0x0, 0x3, 0x2, 0x4e, 0x0, 0xf0, 0x0, 0x1, 0x1, 0x2b, 0x4, 0x38, 0x4, 0x3, 0x0, 0xed, 0x5c, 0x1, 0x4d, 0x4d, 0x1, 0x5c, 0xed,
	0xd, 0x0, 0x2, 0x2, 0x4d, 0x0, 0xf1, 0x0, 0x1, 0x1, 0x2b, 0x4, 0x38, 0x4, 0x2, 0x0, 0xab, 0x1c, 0x1a, 0x1a, 0x1c, 0xab,
	0xc, 0x0, 0x3, 0x2, 0x4d, 0x0, 0xf1, 0x0, 0x1, 0x1, 0x2c, 0x4, 0x38, 0x4, 0x3, 0x0, 0xeb, 0x55, 0x1, 0xa8, 0xa8, 0x1, 0x55, 0xeb,
	0xc, 0x0, 0x2, 0x2, 0x4c, 0x0, 0xf2, 0x0, 0x1, 0x1, 0x2c, 0x4, 0x38, 0x4, 0x2, 0x0, 0xaa, 0x1d, 0x38, 0x38, 0x1d, 0xaa,
	0xb, 0x0, 0x3, 0x2, 0x4c, 0x0, 0xf2, 0x0, 0x1, 0x1, 0x2d, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf0, 0x5b, 0x1, 0xb8, 0xb8, 0x1, 0x5b, 0xf0,
	0xb, 0x0, 0x2, 0x2, 0x4b, 0x0, 0xf3, 0x0, 0x1, 0x1, 0x2d, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb8, 0x24, 0x36, 0x36, 0x24, 0xb8,
	0xa, 0x0, 0x3, 0x2, 0x4b, 0x0, 0xf3, 0x0, 0x1, 0x1, 0x2e, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf7, 0x6b, 0x5, 0xb3, 0xb3, 0x5, 0x6b, 0xf7,
	0xa, 0x0, 0x2, 0x2, 0x4a, 0x0, 0xf4, 0x0, 0x1, 0x1, 0x2e, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc8, 0x30, 0x1a, 0x1a, 0x30, 0xc8,
	0x9, 0x0, 0x3, 0x2, 0x4a, 0x0, 0xf4, 0x0, 0x1, 0x1, 0x2f, 0x4, 0x38, 0x4, 0x3, 0x0, 0xfe, 0x84, 0xc, 0x6b, 0x6b, 0xc, 0x84, 0xfe,
	0x9, 0x0, 0x2, 0x2, 0x4a, 0x0, 0xf4, 0x0, 0x1, 0x1, 0x2f, 0x4, 0x38, 0x4, 0x2, 0x0, 0xdf, 0x42, 0xbf, 0xbf, 0x42, 0xdf,
	0x9, 0x0, 0x2, 0x2, 0x49, 0x0, 0xf5, 0x0, 0x1, 0x1, 0x2f, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa3, 0x1a, 0xe, 0xe, 0x1a, 0xa3,
	0x8, 0x0, 0x3, 0x2, 0x49, 0x0, 0xf5, 0x0, 0x1, 0x1, 0x30, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf8, 0x61, 0x2, 0x3a, 0x3a, 0x2, 0x61, 0xf8,
	0x8, 0x0, 0x2, 0x2, 0x49, 0x0, 0xf5, 0x0, 0x1, 0x1, 0x30, 0x4, 0x38, 0x4, 0x2, 0x0, 0xce, 0x32, 0x68, 0x68, 0x32, 0xce,
	0x8, 0x0, 0x2, 0x2, 0x49, 0x0, 0xf5, 0x0, 0x1, 0x1, 0x30, 0x4, 0x38, 0x4, 0x2, 0x0, 0x94, 0x14, 0x91, 0x91, 0x14, 0x94,
	0x7, 0x0, 0x3, 0x2, 0x49, 0x0, 0xf5, 0x0, 0x1, 0x1, 0x31, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf2, 0x55, 0x1, 0xb8, 0xb8, 0x1, 0x55, 0xf2,
	0x7, 0x0, 0x2, 0x2, 0x49, 0x0, 0xf5, 0x0, 0x1, 0x1, 0x31, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc5, 0x2c, 0xcf, 0xcf, 0x2c, 0xc5,
	0x7, 0x0, 0x2, 0x2, 0x49, 0x0, 0xf5, 0x0, 0x1, 0x1, 0x31, 0x4, 0x38, 0x4, 0x2, 0x0, 0x8f, 0x12, 0xe6, 0xe6, 0x12, 0x8f,
	0x6, 0x0, 0x3, 0x2, 0x49, 0x0, 0xf5, 0x0, 0x1, 0x1, 0x32, 0x4, 0x38, 0x4, 0x3, 0x0, 0xe6, 0x57, 0x1, 0xe6, 0xe6, 0x1, 0x57, 0xe6,
	0x6, 0x0, 0x2, 0x2, 0x49, 0x0, 0xf5, 0x0, 0x1, 0x1, 0x32, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc8, 0x33, 0xe6, 0xe6, 0x33, 0xc8,
	0x6, 0x0, 0x2, 0x2, 0x49, 0x0, 0xf5, 0x0, 0x1, 0x1, 0x32, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9e, 0x1b, 0xe6, 0xe6, 0x1b, 0x9e,
	0x6, 0x0, 0x2, 0x2, 0x49, 0x0, 0xf5, 0x0, 0x1, 0x1, 0x32, 0x4, 0x38, 0x4, 0x2, 0x0, 0x6c, 0x5, 0xcf, 0xcf, 0x5, 0x6c,
	0x5, 0x0, 0x2, 0x2, 0x49, 0x0, 0xf5, 0x0, 0x1, 0x1, 0x33, 0x4, 0x38, 0x4, 0x2, 0x0, 0xe6, 0x3c, 0xb8, 0xb8, 0x3c, 0xe6,
	0x5, 0x0, 0x2, 0x2, 0x49, 0x0, 0xf5, 0x0, 0x1, 0x1, 0x33, 0x4, 0x38, 0x4, 0x2, 0x0, 0xce, 0x14, 0x91, 0x91, 0x14, 0xce,
	0x5, 0x0, 0x1, 0x2, 0x49, 0x0, 0xf5, 0x0, 0x1, 0x1, 0x33, 0x4, 0x38, 0x4, 0x1, 0x0, 0xaa, 0x68, 0x68, 0xaa,
	0x5, 0x0, 0x1, 0x2, 0x49, 0x0, 0xf5, 0x0, 0x1, 0x1, 0x33, 0x4, 0x38, 0x4, 0x1, 0x0, 0x7f, 0x3a, 0x3a, 0x7f,
	0x4, 0x0, 0x2, 0x2, 0x49, 0x0, 0xf5, 0x0, 0x1, 0x1, 0x34, 0x4, 0x38, 0x4, 0x2, 0x0, 0xe6, 0x53, 0xe, 0xe, 0x53, 0xe6,
	0x4, 0x0, 0x2, 0x2, 0x4a, 0x0, 0xf4, 0x0, 0x1, 0x1, 0x34, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd4, 0x2c, 0xbf, 0xbf, 0x2c, 0xd4,
	0x4, 0x0, 0x2, 0x2, 0x4a, 0x0, 0xf4, 0x0, 0x1, 0x1, 0x34, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb9, 0xc, 0x6b, 0x6b, 0xc, 0xb9,
	0x4, 0x0, 0x1, 0x2, 0x4a, 0x0, 0xf4, 0x0, 0x1, 0x1, 0x34, 0x4, 0x38, 0x4, 0x1, 0x0, 0x99, 0x1a, 0x1a, 0x99,
	0x4, 0x0, 0x1, 0x2, 0x4b, 0x0, 0xf3, 0x0, 0x1, 0x1, 0x34, 0x4, 0x38, 0x4, 0x1, 0x0, 0x76, 0xb3, 0xb3, 0x76,
	0x3, 0x0, 0x2, 0x2, 0x4b, 0x0, 0xf3, 0x0, 0x1, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0xe6, 0x54, 0x36, 0x36, 0x54, 0xe6,
	0x3, 0x0, 0x2, 0x2, 0x4c, 0x0, 0xf2, 0x0, 0x1, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd9, 0x33, 0xb8, 0xb8, 0x33, 0xd9,
	0x3, 0x0, 0x2, 0x2, 0x4c, 0x0, 0xf2, 0x0, 0x1, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc8, 0x17, 0x38, 0x38, 0x17, 0xc8,
	0x3, 0x0, 0x2, 0x2, 0x4d, 0x0, 0xf1, 0x0, 0x1, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb5, 0x3, 0xa8, 0xa8, 0x3, 0xb5,
	0x3, 0x0, 0x1, 0x2, 0x4d, 0x0, 0xf1, 0x0, 0x1, 0x1, 0x35, 0x4, 0x38, 0x4, 0x1, 0x0, 0x9e, 0x1a, 0x1a, 0x9e,
	0x3, 0x0, 0x1, 0x2, 0x4e, 0x0, 0xf0, 0x0, 0x1, 0x1, 0x35, 0x4, 0x38, 0x4, 0x1, 0x0, 0x86, 0x4d, 0x4d, 0x86,
	0x2, 0x0, 0x2, 0x2, 0x4f, 0x0, 0xef, 0x0, 0x1, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xe6, 0x6c, 0x8c, 0x8c, 0x6c, 0xe6,
	0x2, 0x0, 0x2, 0x2, 0x50, 0x0, 0xee, 0x0, 0x2, 0x2, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xde, 0x54, 0xa, 0xa6, 0xa6, 0xa, 0x54, 0xde,
	0x2, 0x0, 0x2, 0x2, 0x51, 0x0, 0xed, 0x0, 0x2, 0x2, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd2, 0x3c, 0xd, 0xbf, 0xbf, 0xd, 0x3c, 0xd2,
	0x2, 0x0, 0x2, 0x2, 0x52, 0x0, 0xec, 0x0, 0x2, 0x2, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc5, 0x26, 0xf, 0xbf, 0xbf, 0xf, 0x26, 0xc5,
	0x2, 0x0, 0x2, 0x2, 0x53, 0x0, 0xeb, 0x0, 0x2, 0x2, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb5, 0x14, 0xf, 0xb3, 0xb3, 0xf, 0x14, 0xb5,
	0x2, 0x0, 0x2, 0x2, 0x54, 0x0, 0xea, 0x0, 0x2, 0x2, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa5, 0x5, 0x8, 0x8f, 0x8f, 0x8, 0x5, 0xa5,
	0x2, 0x0, 0x1, 0x2, 0x55, 0x0, 0xe9, 0x0, 0x1, 0x1, 0x36, 0x4, 0x38, 0x4, 0x1, 0x0, 0x93, 0x61, 0x61, 0x93,
	0x2, 0x0, 0x1, 0x2, 0x57, 0x0, 0xe7, 0x0, 0x2, 0x2, 0x36, 0x4, 0x38, 0x4, 0x1, 0x0, 0x82, 0x21, 0x8c, 0x8c, 0x21, 0x82,
	0x1, 0x0, 0x2, 0x2, 0x59, 0x0, 0xe5, 0x0, 0x2, 0x2, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xe6, 0x6f, 0x33, 0xa8, 0xa8, 0x33, 0x6f, 0xe6,
	0x1, 0x0, 0x2, 0x2, 0x5b, 0x0, 0xe3, 0x0, 0x2, 0x2, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xe1, 0x5c, 0x33, 0xa6, 0xa6, 0x33, 0x5c, 0xe1,
	0x1, 0x0, 0x2, 0x2, 0x5e, 0x0, 0xe0, 0x0, 0x3, 0x3, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xdb, 0x4b, 0x1a, 0x66, 0xbf, 0xbf, 0x66, 0x1a, 0x4b, 0xdb,
	0x1, 0x0, 0x2, 0x2, 0x62, 0x0, 0xdc, 0x0, 0x4, 0x4, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd3, 0x3a, 0xd, 0x3b, 0x66, 0x8c, 0x8c, 0x66, 0x3b, 0xd, 0x3a, 0xd3,
	0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xcb, 0x2a, 0x2a, 0xcb,
	0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc2, 0x1c, 0x1c, 0xc2,
	0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb9, 0xf, 0xf, 0xb9,
	0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xaf, 0x5, 0x5, 0xaf,
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa4, 0xa4,
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x99, 0x99,
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8e, 0x8e,
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x82, 0x82,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xfc, 0x77, 0x77, 0xfc,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xf9, 0x6b, 0x6b, 0xf9,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xf6, 0x60, 0x60, 0xf6,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xf2, 0x54, 0x54, 0xf2,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xee, 0x48, 0x48, 0xee,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xeb, 0x3e, 0x3e, 0xeb,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xe6, 0x33, 0x33, 0xe6,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xe1, 0x2a, 0x2a, 0xe1,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xdc, 0x20, 0x20, 0xdc,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd8, 0x17, 0x17, 0xd8,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd2, 0xf, 0xf, 0xd2,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xcc, 0x9, 0x9, 0xcc,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc7, 0x3, 0x3, 0xc7,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xc1, 0xc1,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xbc, 0xbc,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xb6, 0xb6,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xb0, 0xb0,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa9, 0xa9,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa3, 0xa3,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x9d, 0x9d,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x97, 0x97,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x90, 0x90,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8a, 0x8a,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x83, 0x83,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x7d, 0x7d,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x77, 0x77,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x70, 0x70,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x69, 0x69,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x63, 0x63,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x5d, 0x5d,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x56, 0x56,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x50, 0x50,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x4a, 0x4a,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x45, 0x45,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x41, 0x41,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x3a, 0x3a,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x37, 0x37,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x32, 0x32,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x2d, 0x2d,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x25, 0x25,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x1b, 0x1b,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x16, 0x16,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x11, 0x11,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x7, 0x7,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x3, 0x3,

	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x3, 0x3,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x7, 0x7,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x11, 0x11,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x16, 0x16,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x1b, 0x1b,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x20, 0x20,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x25, 0x25,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x2d, 0x2d,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x32, 0x32,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x37, 0x37,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x3a, 0x3a,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x41, 0x41,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x45, 0x45,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x4a, 0x4a,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x50, 0x50,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x56, 0x56,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x5d, 0x5d,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x63, 0x63,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x69, 0x69,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x70, 0x70,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x77, 0x77,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x7d, 0x7d,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x83, 0x83,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8a, 0x8a,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x90, 0x90,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x97, 0x97,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x9d, 0x9d,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa3, 0xa3,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa9, 0xa9,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xb0, 0xb0,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xb6, 0xb6,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xbc, 0xbc,
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xc1, 0xc1,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc7, 0x3, 0x3, 0xc7,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xcc, 0x9, 0x9, 0xcc,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd2, 0xf, 0xf, 0xd2,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd8, 0x17, 0x17, 0xd8,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xdc, 0x20, 0x20, 0xdc,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xe1, 0x2a, 0x2a, 0xe1,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xe6, 0x33, 0x33, 0xe6,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xeb, 0x3e, 0x3e, 0xeb,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xee, 0x48, 0x48, 0xee,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xf2, 0x54, 0x54, 0xf2,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xf6, 0x60, 0x60, 0xf6,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xf9, 0x6b, 0x6b, 0xf9,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xfc, 0x77, 0x77, 0xfc,
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x82, 0x82,
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8e, 0x8e,
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x99, 0x99,
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa4, 0xa4,
	0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xaf, 0x5, 0x5, 0xaf,
	0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb9, 0xf, 0xf, 0xb9,
	0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc2, 0x1c, 0x1c, 0xc2,
	0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xcb, 0x2a, 0x2a, 0xcb,
	0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd3, 0x3a, 0x3a, 0xd3,
	0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xdb, 0x4b, 0x4b, 0xdb,
	0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xe1, 0x5c, 0x5c, 0xe1,
	0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xe6, 0x6f, 0x6f, 0xe6,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x38, 0x4, 0x1, 0x0, 0x82, 0x82,
	0x2, 0x0, 0x1, 0x1, 0x36, 0x4, 0x38, 0x4, 0x1, 0x0, 0x93, 0x93,
	0x2, 0x0, 0x2, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa5, 0x5, 0x5, 0xa5,
	0x2, 0x0, 0x2, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb5, 0x14, 0x14, 0xb5,
	0x2, 0x0, 0x2, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc5, 0x26, 0x26, 0xc5,
	0x2, 0x0, 0x2, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd2, 0x3c, 0x3c, 0xd2,
	0x2, 0x0, 0x2, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xde, 0x54, 0x54, 0xde,
	0x2, 0x0, 0x2, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xe6, 0x6c, 0x6c, 0xe6,
	0x3, 0x0, 0x1, 0x1, 0x35, 0x4, 0x38, 0x4, 0x1, 0x0, 0x86, 0x86,
	0x3, 0x0, 0x1, 0x1, 0x35, 0x4, 0x38, 0x4, 0x1, 0x0, 0x9e, 0x9e,
	0x3, 0x0, 0x2, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb5, 0x3, 0x3, 0xb5,
	0x3, 0x0, 0x2, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc8, 0x17, 0x17, 0xc8,
	0x3, 0x0, 0x2, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd9, 0x33, 0x33, 0xd9,
	0x3, 0x0, 0x2, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0xe6, 0x54, 0x54, 0xe6,
	0x4, 0x0, 0x1, 0x1, 0x34, 0x4, 0x38, 0x4, 0x1, 0x0, 0x76, 0x76,
	0x4, 0x0, 0x1, 0x1, 0x34, 0x4, 0x38, 0x4, 0x1, 0x0, 0x99, 0x99,
	0x4, 0x0, 0x2, 0x1, 0x34, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb9, 0xc, 0xc, 0xb9,
	0x4, 0x0, 0x2, 0x1, 0x34, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd4, 0x2c, 0x2c, 0xd4,
	0x4, 0x0, 0x2, 0x1, 0x34, 0x4, 0x38, 0x4, 0x2, 0x0, 0xe6, 0x53, 0x53, 0xe6,
	0x5, 0x0, 0x1, 0x1, 0x33, 0x4, 0x38, 0x4, 0x1, 0x0, 0x7f, 0x7f,
	0x5, 0x0, 0x1, 0x1, 0x33, 0x4, 0x38, 0x4, 0x1, 0x0, 0xaa, 0xaa,
	0x5, 0x0, 0x2, 0x1, 0x33, 0x4, 0x38, 0x4, 0x2, 0x0, 0xce, 0x14, 0x14, 0xce,
	0x5, 0x0, 0x2, 0x1, 0x33, 0x4, 0x38, 0x4, 0x2, 0x0, 0xe6, 0x3c, 0x3c, 0xe6,
	0x6, 0x0, 0x2, 0x1, 0x32, 0x4, 0x38, 0x4, 0x2, 0x0, 0x6c, 0x5, 0x5, 0x6c,
	0x6, 0x0, 0x2, 0x1, 0x32, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9e, 0x1b, 0x1b, 0x9e,
	0x6, 0x0, 0x2, 0x1, 0x32, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc8, 0x33, 0x33, 0xc8,
	0x6, 0x0, 0x3, 0x1, 0x32, 0x4, 0x38, 0x4, 0x3, 0x0, 0xe6, 0x57, 0x1, 0x1, 0x57, 0xe6,
	0x7, 0x0, 0x2, 0x1, 0x31, 0x4, 0x38, 0x4, 0x2, 0x0, 0x8f, 0x12, 0x12, 0x8f,
	0x7, 0x0, 0x2, 0x1, 0x31, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc5, 0x2c, 0x2c, 0xc5,
	0x7, 0x0, 0x3, 0x1, 0x31, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf2, 0x55, 0x1, 0x1, 0x55, 0xf2,
	0x8, 0x0, 0x2, 0x1, 0x30, 0x4, 0x38, 0x4, 0x2, 0x0, 0x94, 0x14, 0x14, 0x94,
	0x8, 0x0, 0x2, 0x1, 0x30, 0x4, 0x38, 0x4, 0x2, 0x0, 0xce, 0x32, 0x32, 0xce,
	0x8, 0x0, 0x3, 0x1, 0x30, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf8, 0x61, 0x2, 0x2, 0x61, 0xf8,
	0x9, 0x0, 0x2, 0x1, 0x2f, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa3, 0x1a, 0x1a, 0xa3,
	0x9, 0x0, 0x2, 0x1, 0x2f, 0x4, 0x38, 0x4, 0x2, 0x0, 0xdf, 0x42, 0x42, 0xdf,
	0x9, 0x0, 0x3, 0x1, 0x2f, 0x4, 0x38, 0x4, 0x3, 0x0, 0xfe, 0x84, 0xc, 0xc, 0x84, 0xfe,
	0xa, 0x0, 0x2, 0x1, 0x2e, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc8, 0x30, 0x30, 0xc8,
	0xa, 0x0, 0x3, 0x1, 0x2e, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf7, 0x6b, 0x5, 0x5, 0x6b, 0xf7,
	0xb, 0x0, 0x2, 0x1, 0x2d, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb8, 0x24, 0x24, 0xb8,
	0xb, 0x0, 0x3, 0x1, 0x2d, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf0, 0x5b, 0x1, 0x1, 0x5b, 0xf0,
	0xc, 0x0, 0x2, 0x1, 0x2c, 0x4, 0x38, 0x4, 0x2, 0x0, 0xaa, 0x1d, 0x1d, 0xaa,
	0xc, 0x0, 0x3, 0x1, 0x2c, 0x4, 0x38, 0x4, 0x3, 0x0, 0xeb, 0x55, 0x1, 0x1, 0x55, 0xeb,
	0xd, 0x0, 0x2, 0x1, 0x2b, 0x4, 0x38, 0x4, 0x2, 0x0, 0xab, 0x1c, 0x1c, 0xab,
	0xd, 0x0, 0x3, 0x1, 0x2b, 0x4, 0x38, 0x4, 0x3, 0x0, 0xed, 0x5c, 0x1, 0x1, 0x5c, 0xed,
	0xe, 0x0, 0x2, 0x1, 0x2a, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb2, 0x22, 0x22, 0xb2,
	0xe, 0x0, 0x3, 0x1, 0x2a, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf3, 0x68, 0x3, 0x3, 0x68, 0xf3,
	0xf, 0x0, 0x2, 0x1, 0x29, 0x4, 0x38, 0x4, 0x2, 0x0, 0xbe, 0x2e, 0x2e, 0xbe,
	0xf, 0x0, 0x3, 0x1, 0x29, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf9, 0x7f, 0x9, 0x9, 0x7f, 0xf9,
	0x10, 0x0, 0x2, 0x1, 0x28, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd7, 0x47, 0x47, 0xd7,
	0x11, 0x0, 0x2, 0x1, 0x27, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa5, 0x1c, 0x1c, 0xa5,
	0x11, 0x0, 0x3, 0x1, 0x27, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf2, 0x70, 0x5, 0x5, 0x70, 0xf2,
	0x12, 0x0, 0x2, 0x1, 0x26, 0x4, 0x38, 0x4, 0x2, 0x0, 0xcd, 0x3f, 0x3f, 0xcd,
	0x12, 0x0, 0x3, 0x1, 0x26, 0x4, 0x38, 0x4, 0x3, 0x0, 0xfe, 0x9e, 0x18, 0x18, 0x9e, 0xfe,
	0x13, 0x0, 0x3, 0x1, 0x25, 0x4, 0x38, 0x4, 0x3, 0x0, 0xee, 0x6f, 0x4, 0x4, 0x6f, 0xee,
	0x14, 0x0, 0x2, 0x1, 0x24, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd0, 0x46, 0x46, 0xd0,
	0x15, 0x0, 0x2, 0x1, 0x23, 0x4, 0x38, 0x4, 0x2, 0x0, 0xab, 0x26, 0x26, 0xab,
	0x15, 0x0, 0x3, 0x1, 0x23, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf9, 0x8c, 0xf, 0xf, 0x8c, 0xf9,
	0x16, 0x0, 0x3, 0x1, 0x22, 0x4, 0x38, 0x4, 0x3, 0x0, 0xeb, 0x6d, 0x3, 0x3, 0x6d, 0xeb,
	0x17, 0x0, 0x2, 0x1, 0x21, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd6, 0x53, 0x53, 0xd6,
	0x18, 0x0, 0x2, 0x1, 0x20, 0x4, 0x38, 0x4, 0x2, 0x0, 0xbf, 0x3d, 0x3d, 0xbf,
	0x18, 0x0, 0x3, 0x1, 0x20, 0x4, 0x38, 0x4, 0x3, 0x0, 0xfe, 0xaf, 0x2d, 0x2d, 0xaf, 0xfe,
	0x19, 0x0, 0x3, 0x1, 0x1f, 0x4, 0x38, 0x4, 0x3, 0x0, 0xfc, 0xa0, 0x21, 0x21, 0xa0, 0xfc,
	0x1a, 0x0, 0x3, 0x1, 0x1e, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf8, 0x91, 0x17, 0x17, 0x91, 0xf8,
	0x1b, 0x0, 0x3, 0x1, 0x1d, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf1, 0x86, 0x11, 0x11, 0x86, 0xf1,
	0x1c, 0x0, 0x3, 0x1, 0x1c, 0x4, 0x38, 0x4, 0x3, 0x0, 0xee, 0x82, 0x10, 0x10, 0x82, 0xee,
	0x1d, 0x0, 0x3, 0x1, 0x1b, 0x4, 0x38, 0x4, 0x3, 0x0, 0xed, 0x82, 0x10, 0x10, 0x82, 0xed,
	0x1e, 0x0, 0x3, 0x1, 0x1a, 0x4, 0x38, 0x4, 0x3, 0x0, 0xec, 0x81, 0x11, 0x11, 0x81, 0xec,
	0x1f, 0x0, 0x3, 0x1, 0x19, 0x4, 0x38, 0x4, 0x3, 0x0, 0xec, 0x85, 0x17, 0x17, 0x85, 0xec,
	0x20, 0x0, 0x3, 0x1, 0x18, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf1, 0x93, 0x23, 0x23, 0x93, 0xf1,
	0x21, 0x0, 0x3, 0x1, 0x17, 0x4, 0x38, 0x4, 0x3, 0x0, 0xf9, 0xa4, 0x32, 0x32, 0xa4, 0xf9,
	0x22, 0x0, 0x4, 0x1, 0x16, 0x4, 0x38, 0x4, 0x4, 0x0, 0xfd, 0xb5, 0x44, 0x1, 0x1, 0x44, 0xb5, 0xfd,
	0x24, 0x0, 0x3, 0x1, 0x14, 0x4, 0x38, 0x4, 0x3, 0x0, 0xc6, 0x58, 0x5, 0x5, 0x58, 0xc6,
	0x25, 0x0, 0x3, 0x1, 0x13, 0x4, 0x38, 0x4, 0x3, 0x0, 0xd9, 0x71, 0x11, 0x11, 0x71, 0xd9,
	0x26, 0x0, 0x3, 0x1, 0x12, 0x4, 0x38, 0x4, 0x3, 0x0, 0xed, 0x90, 0x29, 0x29, 0x90, 0xed,
	0x27, 0x0, 0x4, 0x1, 0x11, 0x4, 0x38, 0x4, 0x4, 0x0, 0xfa, 0xb2, 0x4a, 0x4, 0x4, 0x4a, 0xb2, 0xfa,
	0x29, 0x0, 0x3, 0x1, 0xf, 0x4, 0x38, 0x4, 0x3, 0x0, 0xd2, 0x6f, 0x18, 0x18, 0x6f, 0xd2,
	0x2a, 0x0, 0x4, 0x1, 0xe, 0x4, 0x38, 0x4, 0x4, 0x0, 0xef, 0x9d, 0x3d, 0x4, 0x4, 0x3d, 0x9d, 0xef,
	0x2b, 0x0, 0x4, 0x1, 0xd, 0x4, 0x38, 0x4, 0x4, 0x0, 0xfe, 0xcb, 0x6c, 0x1a, 0x1a, 0x6c, 0xcb, 0xfe,
	0x2d, 0x0, 0x4, 0x1, 0xb, 0x4, 0x38, 0x4, 0x4, 0x0, 0xf0, 0xa2, 0x44, 0x8, 0x8, 0x44, 0xa2, 0xf0,
	0x2f, 0x0, 0x4, 0x1, 0x9, 0x4, 0x38, 0x4, 0x4, 0x0, 0xd4, 0x7b, 0x2a, 0x2, 0x2, 0x2a, 0x7b, 0xd4,
	0x30, 0x0, 0x4, 0x1, 0x8, 0x4, 0x38, 0x4, 0x4, 0x0, 0xf9, 0xba, 0x60, 0x1c, 0x1c, 0x60, 0xba, 0xf9,
	0x32, 0x0, 0x4, 0x1, 0x6, 0x4, 0x38, 0x4, 0x4, 0x0, 0xee, 0xa7, 0x52, 0x15, 0x15, 0x52, 0xa7, 0xee,
	0x34, 0x0, 0x4, 0x1, 0x4, 0x4, 0x38, 0x4, 0x4, 0x0, 0xe5, 0x9d, 0x4b, 0x14, 0x14, 0x4b, 0x9d, 0xe5,
	0x36, 0x0, 0x4, 0x1, 0x2, 0x4, 0x38, 0x4, 0x4, 0x0, 0xe2, 0x9a, 0x49, 0x14, 0x14, 0x49, 0x9a, 0xe2,
	0x38, 0x0, 0x5, 0x1, 0x0, 0x4, 0x38, 0x4, 0x5, 0x0, 0xe1, 0x99, 0x4d, 0x1c, 0x2, 0x2, 0x1c, 0x4d, 0x99, 0xe1,
	0x3a, 0x0, 0x5, 0x1, 0xfe, 0x3, 0x38, 0x4, 0x5, 0x0, 0xe7, 0xa9, 0x5d, 0x28, 0x8, 0x8, 0x28, 0x5d, 0xa9, 0xe7,
	0x3c, 0x0, 0x6, 0x1, 0xfc, 0x3, 0x38, 0x4, 0x6, 0x0, 0xf2, 0xbd, 0x75, 0x39, 0x15, 0x1, 0x1, 0x15, 0x39, 0x75, 0xbd, 0xf2,
	0x3e, 0x0, 0x6, 0x1, 0xfa, 0x3, 0x38, 0x4, 0x6, 0x0, 0xfd, 0xd4, 0x96, 0x55, 0x2a, 0xe, 0xe, 0x2a, 0x55, 0x96, 0xd4, 0xfd,
	0x41, 0x0, 0x6, 0x1, 0xf7, 0x3, 0x38, 0x4, 0x6, 0x0, 0xef, 0xc2, 0x85, 0x4a, 0x25, 0xb, 0xb, 0x25, 0x4a, 0x85, 0xc2, 0xef,
	0x44, 0x0, 0x7, 0x1, 0xf4, 0x3, 0x38, 0x4, 0x7, 0x0, 0xea, 0xba, 0x7d, 0x47, 0x27, 0x10, 0x1, 0x1, 0x10, 0x27, 0x47, 0x7d, 0xba, 0xea,
	0x47, 0x0, 0x7, 0x1, 0xf1, 0x3, 0x38, 0x4, 0x7, 0x0, 0xe8, 0xbc, 0x88, 0x55, 0x35, 0x20, 0xc, 0xc, 0x20, 0x35, 0x55, 0x88, 0xbc, 0xe8,
	0x4a, 0x0, 0x8, 0x1, 0xee, 0x3, 0x38, 0x4, 0x8, 0x0, 0xf6, 0xd6, 0xad, 0x7c, 0x4e, 0x31, 0x1d, 0x9, 0x9, 0x1d, 0x31, 0x4e, 0x7c, 0xad, 0xd6, 0xf6,
	0x4e, 0x0, 0xe, 0x1, 0xea, 0x3, 0x38, 0x4, 0xe, 0x0, 0xf6, 0xdc, 0xbb, 0x91, 0x6b, 0x55, 0x43, 0x32, 0x1f, 0x17, 0x12, 0xd, 0x7, 0x3, 0x3, 0x7, 0xd, 0x12, 0x17, 0x1f, 0x32, 0x43, 0x55, 0x6b, 0x91, 0xbb, 0xdc, 0xf6,
	0x53, 0x0, 0x11, 0x1, 0xe5, 0x3, 0x38, 0x4, 0x11, 0x0, 0xea, 0xd5, 0xb7, 0x8f, 0x72, 0x62, 0x52, 0x40, 0x31, 0x26, 0x22, 0x1c, 0x17, 0x12, 0xd, 0x7, 0x3, 0x3, 0x7, 0xd, 0x12, 0x17, 0x1c, 0x22, 0x26, 0x31, 0x40, 0x52, 0x62, 0x72, 0x8f, 0xb7, 0xd5, 0xea,
	0x58, 0x0, 0x13, 0x1, 0xe0, 0x3, 0x38, 0x4, 0x13, 0x0, 0xed, 0xdb, 0xc1, 0xa4, 0x85, 0x6b, 0x59, 0x4e, 0x41, 0x32, 0x25, 0x1e, 0x1b, 0x16, 0x12, 0xe, 0xa, 0x6, 0x2, 0x2, 0x6, 0xa, 0xe, 0x12, 0x16, 0x1b, 0x1e, 0x25, 0x32, 0x41, 0x4e, 0x59, 0x6b, 0x85, 0xa4, 0xc1, 0xdb, 0xed,
	0x5e, 0x0, 0x21, 0x1, 0xda, 0x3, 0x38, 0x4, 0x21, 0x0, 0xf3, 0xe9, 0xda, 0xc6, 0xaf, 0x97, 0x82, 0x72, 0x68, 0x5d, 0x52, 0x46, 0x3b, 0x30, 0x28, 0x1f, 0x18, 0x14, 0xc, 0x6, 0x3, 0x2, 0x3, 0x2, 0x2, 0x1, 0x1, 0x2, 0x2, 0x2, 0x2, 0x2, 0x1, 0x1, 0x2, 0x2, 0x2, 0x2, 0x2, 0x1, 0x1, 0x2, 0x2, 0x3, 0x2, 0x3, 0x6, 0xc, 0x14, 0x18, 0x1f, 0x28, 0x30, 0x3b, 0x46, 0x52, 0x5d, 0x68, 0x72, 0x82, 0x97, 0xaf, 0xc6, 0xda, 0xe9, 0xf3,
	0x66, 0x0, 0x25, 0x1, 0xd2, 0x3, 0x38, 0x4, 0x25, 0x0, 0xf1, 0xe9, 0xe0, 0xd5, 0xc9, 0xb8, 0xaa, 0x9d, 0x90, 0x82, 0x73, 0x69, 0x60, 0x56, 0x4b, 0x42, 0x39, 0x30, 0x2a, 0x24, 0x1c, 0x1d, 0x19, 0x17, 0x14, 0x10, 0xe, 0xc, 0xb, 0x7, 0x5, 0x3, 0x1, 0x2, 0x3, 0x3, 0x1, 0x1, 0x3, 0x3, 0x2, 0x1, 0x3, 0x5, 0x7, 0xb, 0xc, 0xe, 0x10, 0x14, 0x17, 0x19, 0x1d, 0x1c, 0x24, 0x2a, 0x30, 0x39, 0x42, 0x4b, 0x56, 0x60, 0x69, 0x73, 0x82, 0x90, 0x9d, 0xaa, 0xb8, 0xc9, 0xd5, 0xe0, 0xe9, 0xf1,
	0x72, 0x0, 0x31, 0x1, 0xc6, 0x3, 0x38, 0x4, 0x31, 0x0, 0xea, 0xe5, 0xde, 0xd5, 0xcb, 0xc2, 0xb4, 0xac, 0xa7, 0x9f, 0x99, 0x93, 0x8b, 0x80, 0x79, 0x72, 0x65, 0x60, 0x59, 0x51, 0x49, 0x42, 0x3c, 0x36, 0x2c, 0x21, 0x1f, 0x19, 0x11, 0xe, 0xd, 0xa, 0x4, 0x3, 0x4, 0x3, 0x2, 0x4, 0x4, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x2, 0x2, 0x2, 0x2, 0x3, 0x3, 0x4, 0x4, 0x2, 0x3, 0x4, 0x3, 0x4, 0xa, 0xd, 0xe, 0x11, 0x19, 0x1f, 0x21, 0x2c, 0x36, 0x3c, 0x42, 0x49, 0x51, 0x59, 0x60, 0x65, 0x72, 0x79, 0x80, 0x8b, 0x93, 0x99, 0x9f, 0xa7, 0xac, 0xb4, 0xc2, 0xcb, 0xd5, 0xde, 0xe5, 0xea,
};

#endif
