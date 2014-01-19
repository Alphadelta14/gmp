/* PowerPC-64 gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 2008, 2009 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published
by the Free Software Foundation; either version 3 of the License, or (at
your option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library.  If not, see https://www.gnu.org/licenses/.  */

#define GMP_LIMB_BITS 64
#define GMP_LIMB_BYTES 8

/* 1600MHz PPC970 */

/* Generated by tuneup.c, 2009-01-14, gcc 4.0 */

#define MUL_TOOM22_THRESHOLD             14
#define MUL_TOOM33_THRESHOLD             93
#define MUL_TOOM44_THRESHOLD            135

#define SQR_BASECASE_THRESHOLD            6
#define SQR_TOOM2_THRESHOLD              32
#define SQR_TOOM3_THRESHOLD              74
#define SQR_TOOM4_THRESHOLD             136

#define MULLO_BASECASE_THRESHOLD          0  /* always */
#define MULLO_DC_THRESHOLD               44
#define MULLO_MUL_N_THRESHOLD           234

#define DIV_SB_PREINV_THRESHOLD           0  /* always */
#define DIV_DC_THRESHOLD                 33
#define POWM_THRESHOLD                   89

#define MATRIX22_STRASSEN_THRESHOLD      15
#define HGCD_THRESHOLD                   93
#define GCD_DC_THRESHOLD                237
#define GCDEXT_DC_THRESHOLD             273
#define JACOBI_BASE_METHOD                1

#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define MOD_1_1_THRESHOLD                 6
#define MOD_1_2_THRESHOLD                 9
#define MOD_1_4_THRESHOLD                23
#define USE_PREINV_DIVREM_1               0
#define USE_PREINV_MOD_1                  0
#define DIVEXACT_1_THRESHOLD              0  /* always (native) */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always (native) */

#define GET_STR_DC_THRESHOLD             12
#define GET_STR_PRECOMPUTE_THRESHOLD     24
#define SET_STR_DC_THRESHOLD            650
#define SET_STR_PRECOMPUTE_THRESHOLD   1713

#define MUL_FFT_TABLE  { 336, 672, 1856, 2816, 7168, 20480, 81920, 327680, 0 }
#define MUL_FFT_MODF_THRESHOLD          304
#define MUL_FFT_THRESHOLD              4224

#define SQR_FFT_TABLE  { 272, 672, 1600, 2816, 7168, 20480, 81920, 327680, 786432, 0 }
#define SQR_FFT_MODF_THRESHOLD          272
#define SQR_FFT_THRESHOLD              2688
