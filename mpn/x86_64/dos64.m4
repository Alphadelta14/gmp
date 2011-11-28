divert(-1)
dnl  Copyright 2011 Free Software Foundation, Inc.
dnl
dnl  This file is part of the GNU MP Library.
dnl
dnl  The GNU MP Library is free software; you can redistribute it and/or
dnl  modify it under the terms of the GNU Lesser General Public License as
dnl  published by the Free Software Foundation; either version 3 of the
dnl  License, or (at your option) any later version.
dnl
dnl  The GNU MP Library is distributed in the hope that it will be useful,
dnl  but WITHOUT ANY WARRANTY; without even the implied warranty of
dnl  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
dnl  Lesser General Public License for more details.
dnl
dnl  You should have received a copy of the GNU Lesser General Public License
dnl  along with the GNU MP Library.  If not, see http://www.gnu.org/licenses/.

define(`HOST_DOS64')

define(`JUMPTABSECT', `.section .rdata,"dr"')

define(`DOS64_ENTRY',
	`push	%rdi
	push	%rsi
	mov	%rcx, %rdi
ifelse(eval($1>=2),1,`dnl
	mov	%rdx, %rsi
ifelse(eval($1>=3),1,`dnl
	mov	%r8, %rdx
ifelse(eval($1>=4),1,`dnl
	mov	%r9, %rcx
')')')')

define(`DOS64_EXIT',
	`pop	%rsi
	pop	%rdi')

divert`'dnl