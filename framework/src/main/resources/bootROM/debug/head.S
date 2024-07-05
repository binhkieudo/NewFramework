// See LICENSE.Sifive for license details.
#include <platform.h>

  .section .sdata
  .section .text.init
  .option norvc
  .globl _prog_start
_prog_start:
  csrr	a0, mcycle
  add t0, t0, t1
  csrr	a1, mcycle
  sub s2, a1, a0
  li t0, 0x70000000
  sw s2, 0(t0)
  wfi
