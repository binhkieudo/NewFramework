// #include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <riscv-pk/encoding.h>
#include "include/platform.h"
#include "kprintf.h"

#define REG32(p, i)	((p)[(i) >> 2])

#define SIZE 4

int main(int argc, char **arv) {
  
  REG32(uart, UART_REG_TXCTRL) = UART_TXEN;
  // volatile char *tx = (char*)(&REG32(uart, UART_REG_TXFIFO);
  char pbuf[100];

  // kprintf("Hello\r\n");
  // uint32_t mhartid = read_csr(mhartid);

  uint8_t a[SIZE][SIZE];
  // for (int i = 0; i < SIZE; i++)
  //   a[i] = (uint8_t*)malloc(SIZE * sizeof(uint8_t));

  for (int i = 0; i < SIZE; i++)
    for (int j = 0; j < SIZE; j++)
      a[i][j] = i*10 + j;

  // kprintf("Hello\r\n");
  for (int i = 0; i < SIZE; i++) {
      for (int j = 0; j < SIZE; j++) {
        sprintf(pbuf, "%3d", a[i][j]);
        mprintf("%s", pbuf);
      }
      mprintf("\r\n");
  }

  // for (int i = 0; i < SIZE; i++)
  //   free(a[i]);

  // uint8_t b[SIZE][SIZE];
  // uint8_t c[SIZE][S

  //   for (uint8_t i = 0; i < SIZE; i = i + 1)
  //     for (uint8_t j = 0; j < SIZE; j = j + 1) {
  //       a[i][j] = i + j;
  //       b[i][j] = i + j + 1;
  //       c[i][j] = 0;
  //     }

  //   tl_start = read_csr(mcycle);
  //   for (int i = 0; i < SIZE; i = i + 1)
  //     for (int j = 0; j < SIZE; j = j + 1) {
  //       for (int k = 0; k < SIZE; k = k + 1) 
  //         c[i][j] += a[i][k] * b[k][j];
  //     }
  //   tl_end = read_csr(mcycle);

  //   for (int i = 0; i < SIZE; i = i + 1)
  //     for (int j = 0; j < SIZE; j = j + 1)
  //       if (c[i][j] == 0) error_count++;

  //   t_gap = tl_end - tl_start;

  //   kprintf("Time spent: %l (cycles)\r\n", t_gap);
  //   kprintf("Error: %l \r\n", error_count);

  return 0;
}
