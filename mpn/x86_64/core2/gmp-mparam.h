/* Core 2 gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007,
2008, 2009 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library.  If not, see http://www.gnu.org/licenses/.  */

#define GMP_LIMB_BITS 64
#define BYTES_PER_MP_LIMB 8

/* 2133 MHz Core 2 (65nm) */

/* Generated by tuneup.c, 2009-11-29, gcc 4.2 */

#define MUL_TOOM22_THRESHOLD             22
#define MUL_TOOM33_THRESHOLD             65
#define MUL_TOOM44_THRESHOLD            169

#define SQR_BASECASE_THRESHOLD            0  /* always (native) */
#define SQR_TOOM2_THRESHOLD              28
#define SQR_TOOM3_THRESHOLD              85
#define SQR_TOOM4_THRESHOLD             142

#define MUL_FFT_TABLE  { 400, 800, 1600, 2816, 7168, 20480, 81920, 196608, 0 }
#define MUL_FFT_MODF_THRESHOLD          400
#define MUL_FFT_THRESHOLD              4224

#define SQR_FFT_TABLE  { 336, 736, 1728, 2816, 7168, 20480, 81920, 327680, 0 }
#define SQR_FFT_MODF_THRESHOLD          368
#define SQR_FFT_THRESHOLD              2688

#define MULLO_BASECASE_THRESHOLD          0  /* always */
#define MULLO_DC_THRESHOLD               20
#define MULLO_MUL_N_THRESHOLD          5472

#define MULMOD_BNM1_THRESHOLD            20

#define DC_DIV_QR_THRESHOLD              46
#define REDC_1_TO_REDC_2_THRESHOLD       10
#define REDC_2_TO_REDC_N_THRESHOLD       74

#define MATRIX22_STRASSEN_THRESHOLD      17
#define HGCD_THRESHOLD                  135
#define GCD_DC_THRESHOLD                451
#define GCDEXT_DC_THRESHOLD             460
#define JACOBI_BASE_METHOD                1

#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define MOD_1_1_THRESHOLD                 4
#define MOD_1_2_THRESHOLD                 5
#define MOD_1_4_THRESHOLD                15
#define USE_PREINV_DIVREM_1               1  /* native */
#define USE_PREINV_MOD_1                  0
#define DIVEXACT_1_THRESHOLD              0  /* always (native) */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always (native) */

#define GET_STR_DC_THRESHOLD             11
#define GET_STR_PRECOMPUTE_THRESHOLD     21
#define SET_STR_DC_THRESHOLD            172
#define SET_STR_PRECOMPUTE_THRESHOLD   2058
