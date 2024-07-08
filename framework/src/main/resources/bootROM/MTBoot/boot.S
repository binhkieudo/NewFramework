// See LICENSE.Sifive for license details.
#include "platform.h"

  .section .text.init
  .option norvc
  .globl _prog_start
_prog_start:
  li t0, 1
  li t0, 2
  li t0, 3
  li t0, 4
  li t0, 5
  li t0, 6
  li t0, 7
  li t0, 8
  li t0, 9
  li t0, 10
  li t0, 11
  li t0, 12
  li t0, 13
  li t0, 14
  li t0, 15
  li t0, 16
  li t0, 17
  li t0, 18
  li t0, 19
  li t0, 20
  li t0, 21
  li t0, 22
  li t0, 23
  li t0, 24
  li t0, 25
  li t0, 26
  li t0, 27
  li t0, 28
  li t0, 29
  li t0, 30
  li t0, 31
  li t0, 32
  j _prog_start
  .section .dtb
  .align 3
dtb:
