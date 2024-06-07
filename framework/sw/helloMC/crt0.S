// See LICENSE.Sifive for license details.
#include <platform.h>
#include <smp.h>
#include "common.h"

  .section .text.init
  .option norvc
  .globl _prog_start
_prog_start:
  li s2, 0x8
  // Check core id
  li s1, 0
  csrr s2, mhartid
  beq s1, s2, _hart0
  li s1, 1
  beq s1, s2, _hart1
  li s1, 2
  beq s1, s2, _hart2
  j _hart3
_hart0:
  li sp, (PAYLOAD_DEST + 0x7f0)
  csrr a0, mhartid
  call main
  // wake up hart1
  li t0, (CLINT_CTRL_ADDR + CLINT_MSIP1)
  li t1, 1
  amoswap.w t1, t1, (t0)
  j _loopback
_hart1:
  wfi
  li sp, (PAYLOAD_DEST + 0x7f0)
  csrr a0, mhartid
  call main
  // wake up hart2
  li t0, (CLINT_CTRL_ADDR + CLINT_MSIP2)
  li t1, 1
  amoswap.w t1, t1, (t0)
  j _loopback
_hart2:
  wfi
  li sp, (PAYLOAD_DEST + 0x7f0)
  csrr a0, mhartid
  call main
  // wake up hart3
  li t0, (CLINT_CTRL_ADDR + CLINT_MSIP3)
  li t1, 1
  amoswap.w t1, t1, (t0)
  j _loopback
_hart3:
  wfi
  li sp, (PAYLOAD_DEST + 0x7f0)
  csrr a0, mhartid
  call main
_loopback:
  j _loopback
