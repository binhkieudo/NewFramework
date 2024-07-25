// #include <stdio.h>
#include <stdint.h>
#include <riscv-pk/encoding.h>
#include "include/platform.h"
#include "kprintf.h"
// #include "kprintf.h"
#define REG32(p, i)	((p)[(i) >> 2])

#define DELAY_TIME 500000

void delay() {
	for (int i = 0; i < DELAY_TIME; i = i + 1);	
}

int main(int argc, char **arv) {
  
  
  REG32(uart, UART_REG_TXCTRL) = UART_TXEN;

  while (1) {
    kprintf("Hello world from core %c!!!\r\n", argc + 48);
    delay();
  }

  return 0;
}
