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

// Store in local
uint8_t *a = (uint8_t *)0x40000000;
uint8_t *b = (uint8_t *)0x40001000;
uint8_t *c = (uint8_t *)0x40002000;
uint8_t *d = (uint8_t *)0x40003000;

uint8_t *ae = (uint8_t *)0x40000400;
uint8_t *bg = (uint8_t *)0x40001400;
uint8_t *ce = (uint8_t *)0x40002400;
uint8_t *dg = (uint8_t *)0x40003400;

uint8_t *e = (uint8_t *)0x70005000;
uint8_t *f = (uint8_t *)0x70006000;
uint8_t *g = (uint8_t *)0x70007000;
uint8_t *h = (uint8_t *)0x70008000;

uint8_t *mat_a = (uint8_t *)0x70000000;
uint8_t *mat_b = (uint8_t *)0x70001000;
uint8_t *mat_c = (uint8_t *)0x70002000;

//============== Stage 0 ==================================
void s0_c0() {
  for (int i = 0; i < HALF; i++)
    for (int j = 0; j < HALF; j++)
      for (int k = 0; k < HALF; k++)
        ae[i*HALF + j] = a[i + k*HALF] + e[k + j*HALF];
}

void s0_c1() {
  for (int i = 0; i < HALF; i++)
    for (int j = 0; j < HALF; j++)
      for (int k = 0; k < HALF; k++)
        bg[i*HALF + j] += b[i + k*HALF] * g[k + j*HALF];
}

void s0_c2() {
  for (int i = 0; i < HALF; i++)
    for (int j = 0; j < HALF; j++)
      for (int k = 0; k < HALF; k++)
        ce[i*HALF + j] += c[i + k*HALF] * e[k + j*HALF];
}

void s0_c3() {
  for (int i = 0; i < HALF; i++)
    for (int j = 0; j < HALF; j++)
      for (int k = 0; k < HALF; k++)
        dg[i*HALF + j] += d[i + k*HALF] * g[k + j*HALF];  
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
  for (int i = 0; i < HALF; i++)
    for (int j = 0; j < HALF; j++) {
      // ae[i*HALF + j] = 0;
      for (int k = 0; k < HALF; k++)
        ae[i*HALF + j] += a[i + k*HALF] * f[k + j*HALF];
    }
}

void s2_c1() {
  for (int i = 0; i < HALF; i++)
    for (int j = 0; j < HALF; j++) {
      // bg[i*HALF + j] = 0;
      for (int k = 0; k < HALF; k++)
        bg[i*HALF + j] += b[i + k*HALF] * h[k + j*HALF];
    }
}

void s2_c2() {
  for (int i = 0; i < HALF; i++)
    for (int j = 0; j < HALF; j++) {
      // ce[i*HALF + j] = 0;
      for (int k = 0; k < HALF; k++)
        ce[i*HALF + j] += c[i + k*HALF] * f[k + j*HALF];
    }
}

void s2_c3() {
  for (int i = 0; i < HALF; i++)
    for (int j = 0; j < HALF; j++) {
      // dg[i*HALF + j] = 0;
      for (int k = 0; k < HALF; k++)
        dg[i*HALF + j] += d[i + k*HALF] * h[k + j*HALF];
    }
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

// ============== For normal parallel =======================
void core0() {
  for (int i = 0; i < SIZE/4; i = i + 1)
    for (int j = 0; j < SIZE; j = j + 1)
      for (int k = 0; k < SIZE; k  = k + 1)
        mat_c[i*SIZE + j] += mat_a[i + k*SIZE] * mat_b[k*SIZE + j];
}

void core1() {
  for (int i = SIZE/4; SIZE/2; i = i + 1)
    for (int j = 0; j < SIZE; j = j + 1)
      for (int k = 0; k < SIZE; k  = k + 1)
        mat_c[i*SIZE + j] += mat_a[i + k*SIZE] * mat_b[k*SIZE + j];
}
void core2() {
  for (int i = SIZE/2; i < (SIZE/2+SIZE/4); i = i + 1)
    for (int j = 0; j < SIZE; j = j + 1)
      for (int k = 0; k < SIZE; k  = k + 1)
        mat_c[i*SIZE + j] += mat_a[i + k*SIZE] * mat_b[k*SIZE + j];
}

void core3() {
  for (int i = (SIZE/2+SIZE/4); i < SIZE; i = i + 1)
    for (int j = 0; j < SIZE; j = j + 1)
      for (int k = 0; k < SIZE; k  = k + 1)
        mat_c[i*SIZE + j] += mat_a[i + k*SIZE] * mat_b[k*SIZE + j];
}

int main(int argc, char **arv) {
  
  REG32(uart, UART_REG_TXCTRL) = UART_TXEN;
  uint64_t t_start, t_end;
  uint64_t t_gap[4];
  uint64_t instr_start, instr_end;
  uint64_t instr_gap;

  uint64_t start[4];
  uint64_t end[4];

  kprintf("============= Naive %l ==================== \r\n", SIZE);
//================= Single thread =====================================
  t_start = read_csr(mcycle);
  instr_start = read_csr(minstret);
  for (int i = 0; i < SIZE; i = i + 1)
    for (int j = 0; j < SIZE; j = j + 1)
      for (int k = 0; k < SIZE; k = k + 1)
        mat_c[i*SIZE + j] += mat_a[i + k*SIZE] * mat_b[k*SIZE + j];
  t_end = read_csr(mcycle);
  instr_end = read_csr(minstret);
  t_gap[0] = t_end - t_start;
  instr_gap = instr_end - instr_start;

  kprintf("Time spent (single thread): %l (cycles)\r\n", t_gap[0]);
  kprintf("Instruction: %l\r\n", instr_gap);
  for (int i = 0; i < SIZE; i = i + 1)
    for (int j = 0; j < SIZE; j = j + 1)
      *a = mat_c[i*SIZE + j];

//================= Paralle ================================================
  t_start = read_csr(mcycle);
  REG32(clint, CLINT_MSIP1) = CLINT_MSIPEN;
  REG32(clint, CLINT_MSIP2) = CLINT_MSIPEN;
  REG32(clint, CLINT_MSIP3) = CLINT_MSIPEN;
  core0();
  t_end = read_csr(mcycle);
  t_gap[1] = t_end - t_start;
  kprintf("Time spent (multi-threaded): %l (cycles)\r\n", t_gap[1]);

  kprintf("============= Strassen %l ==================== \r\n", SIZE);
//================= Devide and Conquer (Single thread) =====================
  t_start = read_csr(mcycle);
  instr_start = read_csr(minstret);
  s0_c0();
  s0_c1();
  s0_c2();
  s0_c3();
  s1_c0();
  s1_c2();
  s2_c0();
  s2_c1();
  s2_c2();
  s2_c3();
  s3_c0();
  s3_c2();
  t_end = read_csr(mcycle);
  instr_end = read_csr(minstret);
  t_gap[2] = t_end - t_start;
  instr_gap = instr_end - instr_start;
  kprintf("Time spent (single thread): %l (cycles)\r\n", t_gap[2]);
  kprintf("Instruction: %l\r\n", instr_gap);

//================= Devide and Conquer =====================================
    t_start = read_csr(mcycle);
    start[0] = t_start;
    // Stage 0
    REG32(clint, CLINT_MSIP1) = CLINT_MSIPEN;
    REG32(clint, CLINT_MSIP2) = CLINT_MSIPEN;
    REG32(clint, CLINT_MSIP3) = CLINT_MSIPEN;
    s0_c0();
    end[0] = read_csr(mcycle);

    // Stage 1
    start[1] = read_csr(mcycle);
    REG32(clint, CLINT_MSIP2) = CLINT_MSIPEN;
    s1_c0();
    end[1] = read_csr(mcycle);

    // Stage 2
    start[2] = read_csr(mcycle);
    REG32(clint, CLINT_MSIP1) = CLINT_MSIPEN;
    REG32(clint, CLINT_MSIP2) = CLINT_MSIPEN;
    REG32(clint, CLINT_MSIP3) = CLINT_MSIPEN;
    s2_c0();
    end[2] = read_csr(mcycle);

    // Stage 3
    start[3] = read_csr(mcycle);
    REG32(clint, CLINT_MSIP2) = CLINT_MSIPEN;
    s3_c0();
    end[3] = read_csr(mcycle);
    t_end = read_csr(mcycle);
    t_gap[3] = t_end - t_start;

    kprintf("Time spent (multi-threaded): %l (cycles)\r\n", t_gap[3]);
    kprintf("Stage 0: %l (cycles)\r\n", end[0] - start[0]);
    kprintf("Stage 1: %l (cycles)\r\n", end[1] - start[1]);
    kprintf("Stage 2: %l (cycles)\r\n", end[2] - start[2]);
    kprintf("Stage 3: %l (cycles)\r\n", end[3] - start[3]);

  return 0;
}
