// See LICENSE.Sifive for license details.
#include "platform.h"

  .section .text.init
  .option norvc
  .globl _prog_start
_prog_start:
  li s1, BOOT_ADDR
  jr s1

  .section .dtb
  .align 3
dtb:
