// #include <stdio.h>
#include <stdint.h>
#include <riscv-pk/encoding.h>
#include "include/platform.h"
#include "kprintf.h"

static volatile uint32_t * const clint = (void *)(CLINT_CTRL_ADDR);

#define REG32(p, i)	((p)[(i) >> 2])

#define SIZE 64
#define HALF (SIZE/2)
#define LENGTH (HALF*HALF)

uint8_t *a = (uint8_t *)0x40000000;
uint8_t *b = (uint8_t *)0x40001000;
uint8_t *c = (uint8_t *)0x40002000;
uint8_t *d = (uint8_t *)0x40003000;

uint8_t *ae = (uint8_t *)0x40000400;
uint8_t *bg = (uint8_t *)0x40001400;
uint8_t *ce = (uint8_t *)0x40002400;
uint8_t *dg = (uint8_t *)0x40003400;

uint8_t *e = (uint8_t *)0x80005000;
uint8_t *f = (uint8_t *)0x80006000;
uint8_t *g = (uint8_t *)0x80007000;
uint8_t *h = (uint8_t *)0x80008000;

//============== Stage 0 ==================================
void s0_c0() {
  // for (int i = 0; i < HALF; i++)
  //   for (int j = 0; j < HALF; j++)
  //     for (int k = 0; k < HALF; k++)
  //       ae[i*HALF + j] = a[i + k*HALF] + ae[k + j*HALF];
  for (int i = 0; i < LENGTH; i ++)
    for (int j = 0; j < HALF; j++)
      ae[i] += a[j] * e[j];
}

void s0_c1() {
  // for (int i = 0; i < HALF; i++)
  //   for (int j = 0; j < HALF; j++)
  //     for (int k = 0; k < HALF; k++)
  //       bg[i*HALF + j] += b[i + k*HALF] * g[k + j*HALF];
  for (int i = 0; i < LENGTH; i ++)
    for (int j = 0; j < HALF; j++)
      bg[i] += b[j] * g[j];
}

void s0_c2() {
  // for (int i = 0; i < HALF; i++)
  //   for (int j = 0; j < HALF; j++)
  //     for (int k = 0; k < HALF; k++)
  //       ce[i*HALF + j] += c[i + k*HALF] * e[k + j*HALF];
  for (int i = 0; i < LENGTH; i ++)
    for (int j = 0; j < HALF; j++)
      ce[i] += c[j] * e[j];
}

void s0_c3() {
  // for (int i = 0; i < HALF; i++)
  //   for (int j = 0; j < HALF; j++)
  //     for (int k = 0; k < HALF; k++)
  //       dg[i*HALF + j] += d[i + k*HALF] * g[k + j*HALF];
  for (int i = 0; i < LENGTH; i ++)
      for (int j = 0; j < HALF; j++)
        dg[i] += d[j] * g[j];      
}

// ============== Stage 1 ==================================
void s1_c0() {
  for (int i = 0; i < LENGTH; i++)
        e[i] = ae[i] + bg[i];
}

void s1_c2() {
  for (int i = 0; i < LENGTH; i++)
        g[i] = ce[i] + dg[i];
}

// ============== Stage 2 ==================================
void s2_c0() {
  // for (int i = 0; i < HALF; i++)
  //   for (int j = 0; j < HALF; j++)
  //     for (int k = 0; k < HALF; k++)
  //       ae[i*HALF + j] += a[i + k*HALF] * f[k + j*HALF];
  for (int i = 0; i < LENGTH; i ++)
    for (int j = 0; j < HALF; j++)
      ae[i] += a[j] * f[j];
}

void s2_c1() {
  // for (int i = 0; i < HALF; i++)
  //   for (int j = 0; j < HALF; j++)
  //     for (int k = 0; k < HALF; k++)
  //       bg[i*HALF + j] += b[i + k*HALF] * h[k + j*HALF];
  for (int i = 0; i < LENGTH; i ++)
    for (int j = 0; j < HALF; j++)
      bg[i] += b[j] * h[j];
}

void s2_c2() {
  // for (int i = 0; i < HALF; i++)
  //   for (int j = 0; j < HALF; j++)
  //     for (int k = 0; k < HALF; k++)
  //       ce[i*HALF + j] += c[i + k*HALF] * f[k + j*HALF];
  for (int i = 0; i < LENGTH; i ++)
    for (int j = 0; j < HALF; j++)
      ce[i] += c[j] * f[j];
}

void s2_c3() {
  // for (int i = 0; i < HALF; i++)
  //   for (int j = 0; j < HALF; j++)
  //     for (int k = 0; k < HALF; k++)
  //       dg[i*HALF + j] += d[i + k*HALF] * h[k + j*HALF];
  for (int i = 0; i < LENGTH; i ++)
    for (int j = 0; j < HALF; j++)
      dg[i] += d[j] * h[j];
}

// ============== Stage 3 ==================================
void s3_c0() {
  for (int i = 0; i < LENGTH; i++)
        f[i] = ae[i] + bg[i];
}

void s3_c2() {
  for (int i = 0; i < LENGTH; i++)
        h[i] = ce[i] + dg[i];
}

int main(int argc, char **arv) {
  
  REG32(uart, UART_REG_TXCTRL) = UART_TXEN;

  // uint64_t tl_start, tl_end;
  // uint64_t th_start, th_end;
  // uint64_t t_gap;
  // uint64_t error_count = 0;
  // // uint32_t mhartid = read_csr(mhartid);

  // // kprintf("Hello world from core %l!!!\r\n", 48080);

  // uint32_t a[SIZE][SIZE];
  // uint32_t b[SIZE][SIZE];
  // uint32_t c[SIZE][SIZE];

  // for (uint32_t round = 0; round < 1; round++) {
  //   for (uint32_t i = 0; i < SIZE; i = i + 1)
  //     for (uint32_t j = 0; j < SIZE; j = j + 1) {
  //       a[i][j] = i + j;
  //       b[i][j] = i + j + 1;
  //       c[i][j] = 0;
  //     }

  //   th_start = 0;
  //   tl_start = read_csr(mcycle);
  //   for (int i = 0; i < SIZE; i = i + 1)
  //     for (int j = 0; j < SIZE; j = j + 1) {
  //       // tmp = 0;
  //       for (int k = 0; k < SIZE; k = k + 1) 
  //         c[i][j] += a[i][k] * b[k][j];
  //       // c[i][j] = a[i][j] + b[i][j];
  //       // c[i][j] = tmp;
  //     }
  //   th_end = 0;
  //   tl_end = read_csr(mcycle);

  //   for (int i = 0; i < SIZE; i = i + 1)
  //     for (int j = 0; j < SIZE; j = j + 1)
  //       if (c[i][j] == 0) error_count++;

  //   t_gap = tl_end - tl_start;

  //   kprintf("Round = %l\r\n", round);
  //   // kprintf("Time start: %x %x (cycles)\r\n", th_start, tl_start);
  //   // kprintf("Time end: %x %x (cycles)\r\n", th_end, tl_end);
  //   kprintf("Time spent: %l (cycles)\r\n", t_gap);
  //   kprintf("Error: %l \r\n", error_count);
  // }

//================= Parallel =====================================
  REG32(uart, UART_REG_TXCTRL) = UART_TXEN;

  uint32_t t_start, t_end;
  uint32_t t_gap;
  uint32_t tl_instr_start, th_instr_start, tl_instr_end, th_instr_end;
  uint32_t error_count = 0;

  for (int i = 0; i < LENGTH; i++) {
    a[i] = i % 256;
    b[i] = i % 256;
    c[i] = i % 256;
    d[i] = i % 256;
    e[i] = i % 256;
    f[i] = i % 256;
    g[i] = i % 256;
    h[i] = i % 256;

    ae[i] = 0;
    bg[i] = 0;
    ce[i] = 0;
    dg[i] = 0;
  }

    t_start = read_csr(mcycle);
    tl_instr_start = read_csr(instret);
    th_instr_start = read_csr(instreth);
    // Stage 0
    REG32(clint, CLINT_MSIP1) = CLINT_MSIPEN;
    REG32(clint, CLINT_MSIP2) = CLINT_MSIPEN;
    REG32(clint, CLINT_MSIP3) = CLINT_MSIPEN;
    s0_c0();
    // s0_c1();
    // s0_c2();
    // s0_c3();

    // Stage 1
    // REG32(clint, CLINT_MSIP2) = CLINT_MSIPEN;
    s1_c0();
    // s1_c2();

    // Stage 2
    REG32(clint, CLINT_MSIP1) = CLINT_MSIPEN;
    REG32(clint, CLINT_MSIP2) = CLINT_MSIPEN;
    REG32(clint, CLINT_MSIP3) = CLINT_MSIPEN;
    s2_c0();
    // s0_c1();
    // s0_c2();
    // s0_c3();

    // Stage 3
    REG32(clint, CLINT_MSIP2) = CLINT_MSIPEN;
    s3_c0();
    // s3_c2();
    t_end = read_csr(mcycle);
    tl_instr_end = read_csr(instret);
    th_instr_end = read_csr(instreth);

    for (int i = 0; i < LENGTH; i = i + 1) {
        if (e[i] == 0) error_count++;
        if (f[i] == 0) error_count++;
        if (g[i] == 0) error_count++;
        if (h[i] == 0) error_count++;
    }
    
    t_gap = t_end - t_start;

    kprintf("Time spent: %l (cycles)\r\n", t_gap);
    kprintf("Cycle start: %x %x (cycles)\r\n", th_instr_start, tl_instr_start);
    kprintf("Cycle end: %x %x (cycles)\r\n", th_instr_end, tl_instr_end);
    kprintf("Error: %l \r\n", error_count);

  return 0;
}
