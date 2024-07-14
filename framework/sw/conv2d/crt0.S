// See LICENSE.Sifive for license details.
#include <platform.h>
#include <smp.h>
#include "common.h"
#include "clint.h"

  .section .text.init
  .option norvc
  .globl _prog_start
_prog_start:
    # li s0, MEMORY_MEM_ADDR
    # jr s0
  csrw mie, zero
  csrr a0, mhartid
  beq a0, zero, _hart0
  li t0, 1
  beq a0, t0, _hart1
  li t0, 2
  beq a0, t0, _hart2
  li t0, 3
  beq a0, t0, _hart3
  j _loopback
_hart0:
  csrrw t0, mcycle, zero
  csrrw t0, minstret, zero
  li sp, 0x40000ff0
  call main
  wfi
_hart1:
  wfi
  csrw mie, zero
  li s1, 0
  li t0, (CLINT_CTRL_ADDR + CLINT_MSIP1)
  amoswap.w t1, s1, (t0)
  li sp, 0x40001ff0
  call conv2d_1
  li s1, 1
  csrw mie, s1
  j _hart1
_hart2:
  wfi
  csrw mie, zero
  li s1, 0
  li t0, (CLINT_CTRL_ADDR + CLINT_MSIP2)
  amoswap.w t1, s1, (t0)
  li sp, 0x40002ff0
  call conv2d_2
  li s1, 1
  csrw mie, s1
  j _hart2
_hart3:
  wfi
  csrw mie, zero
  li s1, 0
  li t0, (CLINT_CTRL_ADDR + CLINT_MSIP3)
  amoswap.w t1, s1, (t0)
  li sp, 0x40003ff0
  call conv2d_3
  li s1, 1
  csrw mie, s1
  j _hart3
_loopback:
  j _loopback
