// #include <stdio.h>
#include <stdint.h>
#include <riscv-pk/encoding.h>
#include "include/platform.h"
#include "kprintf.h"

static volatile uint32_t * const clint = (void *)(CLINT_CTRL_ADDR);

#define REG32(p, i)	((p)[(i) >> 2])

#define SIZE 64

int main(int argc, char **arv) {
  
  REG32(uart, UART_REG_TXCTRL) = UART_TXEN;

  uint32_t tl_start, tl_end;
  uint32_t t_gap;
  uint64_t error_count = 0;
  // uint32_t mhartid = read_csr(mhartid);

  // kprintf("Hello world from core %l!!!\r\n", 48080);

  uint32_t a[SIZE][SIZE];
  uint32_t b[SIZE][SIZE];
  uint32_t c[SIZE][SIZE];

    for (uint32_t i = 0; i < SIZE; i = i + 1)
      for (uint32_t j = 0; j < SIZE; j = j + 1) {
        a[i][j] = i + j;
        b[i][j] = i + j + 1;
        c[i][j] = 0;
      }

    tl_start = read_csr(mcycle);
    for (int i = 0; i < SIZE; i = i + 1)
      for (int j = 0; j < SIZE; j = j + 1) {
        for (int k = 0; k < SIZE; k = k + 1) 
          c[i][j] += a[i][k] * b[k][j];
      }
    tl_end = read_csr(mcycle);

    for (int i = 0; i < SIZE; i = i + 1)
      for (int j = 0; j < SIZE; j = j + 1)
        if (c[i][j] == 0) error_count++;

    t_gap = tl_end - tl_start;

    kprintf("Time spent: %l (cycles)\r\n", t_gap);
    kprintf("Error: %l \r\n", error_count);

  return 0;
}
