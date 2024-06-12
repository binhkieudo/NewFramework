// #include <stdio.h>
#include <stdint.h>
#include <riscv-pk/encoding.h>
#include "include/platform.h"
#include "kprintf.h"
// #include "kprintf.h"
#define REG32(p, i)	((p)[(i) >> 2])

#define DELAY_TIME 500000
#define R2L 0
#define L2R 1

static volatile uint32_t * const gpio = (void *)(GPIO_CTRL_ADDR);
volatile uint8_t  direction = R2L;

void delay() {
	for (int i = 0; i < DELAY_TIME; i = i + 1);	
}

int main(int argc, char **arv) {
  
  
  REG32(uart, UART_REG_TXCTRL) = UART_TXEN;
  REG32(gpio, GPIO_OUTPUT_EN) = 0x0000fff0;

  kprintf("Hello world from core %c!!!\r\n", argc + 48);

  uint32_t gpio_val = 0x00000010;

  while (1) {
    REG32(gpio, GPIO_OUTPUT_VAL) = gpio_val;
    gpio_val = gpio_val << 1;
    if (gpio_val == 0x00010000) gpio_val = 0x00000010;
    delay();
  }
  return 0;
}
