// See LICENSE.Sifive for license details.
#include <platform.h>
#include <smp.h>
#include "common.h"

  .section .text.init
  .option norvc
  .globl _prog_start
_prog_start:
  csrw mie, s2
  li sp, (PAYLOAD_DEST + 0x7f0)
  csrr a0, mhartid
  call main
_loopback:
  j _loopback
