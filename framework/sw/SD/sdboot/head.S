// See LICENSE.Sifive for license details.
#include "platform.h"

  .section .text.init
  .option norvc
  .globl _prog_start
_prog_start:
  li s2, 0x8  
  csrw mie, s2
  li sp, 0x70002ff0
  csrr a0, mhartid
  call main
  li s1, MEMORY_MEM_ADDR
  jr s1
_loopback:
  j _loopback

  .section .dtb
  .align 3
dtb:
