// See LICENSE.Sifive for license details.
#include <platform.h>
#include <smp.h>
#include "common.h"
#include "clint.h"

  .section .text.init
  .option norvc
  .globl _prog_start
_prog_start:
  csrw mie, zero
  csrr a0, mhartid
  csrrw t0, mcycle, zero
  li sp, (MEMORY_MEM_ADDR + 0xfff0)
  call main
  wfi
_loopback:
  j _loopback
