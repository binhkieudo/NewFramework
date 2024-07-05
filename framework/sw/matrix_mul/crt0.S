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
  # csrw  instret, zero
  li sp, (MEMORY_MEM_ADDR + 0xfff0)
  call main
  wfi
_hart1:
  wfi
  // Stage 0
  csrw mie, zero
  li s1, 0
  li t0, (CLINT_CTRL_ADDR + CLINT_MSIP1)
  amoswap.w t1, s1, (t0)
  li sp, 0x40001ff0
  call s0_c1
  li s1, 1
  csrw mie, s1
  wfi
  // Stage 2
  csrw mie, zero
  li s1, 0
  li t0, (CLINT_CTRL_ADDR + CLINT_MSIP1)
  amoswap.w t1, s1, (t0)
  li sp, 0x40001ff0
  call s2_c1
  li s1, 1
  csrw mie, s1
  wfi
_hart2:
  wfi
  // Stage 0
  csrw mie, zero
  li s1, 0
  li t0, (CLINT_CTRL_ADDR + CLINT_MSIP2)
  amoswap.w t1, s1, (t0)
  li sp, 0x40002ff0
  call s0_c2
  li s1, 1
  csrw mie, s1
  wfi
  // Stage 1
  csrw mie, zero
  li s1, 0
  li t0, (CLINT_CTRL_ADDR + CLINT_MSIP2)
  amoswap.w t1, s1, (t0)
  li sp, 0x40002ff0
  call s1_c2
  li s1, 1
  csrw mie, s1
  wfi
  // Stage 2
  csrw mie, zero
  li s1, 0
  li t0, (CLINT_CTRL_ADDR + CLINT_MSIP2)
  amoswap.w t1, s1, (t0)
  li sp, 0x40002ff0
  call s2_c2
  li s1, 1
  csrw mie, s1
  wfi
  // Stage 3
  csrw mie, zero
  li s1, 0
  li t0, (CLINT_CTRL_ADDR + CLINT_MSIP2)
  amoswap.w t1, s1, (t0)
  li sp, 0x40002ff0
  call s3_c2
  li s1, 1
  csrw mie, s1
  wfi
_hart3:
  wfi
  // Stage 0
  csrw mie, zero
  li s1, 0
  li t0, (CLINT_CTRL_ADDR + CLINT_MSIP3)
  amoswap.w t1, s1, (t0)
  li sp, 0x40003ff0
  call s0_c3
  li s1, 1
  csrw mie, s1 
  wfi
  // Stage 2
  csrw mie, zero
  li s1, 0
  li t0, (CLINT_CTRL_ADDR + CLINT_MSIP3)
  amoswap.w t1, s1, (t0)
  li sp, 0x40003ff0
  call s2_c3
  li s1, 1
  csrw mie, s1 
  wfi
_loopback:
  j _loopback
