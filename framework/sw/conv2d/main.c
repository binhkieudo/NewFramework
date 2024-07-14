// #include <stdio.h>
#include <stdint.h>
#include <riscv-pk/encoding.h>
#include "include/platform.h"
#include "kprintf.h"

static volatile uint32_t * const clint = (void *)(CLINT_CTRL_ADDR);

#define REG32(p, i)	((p)[(i) >> 2])

#define INPUT_SIZE 128
#define KERNEL_SIZE 32
#define GAP_SIZE (INPUT_SIZE - KERNEL_SIZE)
#define GAP_SIZE1 (GAP_SIZE + 1)
#define GAP_SIZEP1 (GAP_SIZE/4)
#define GAP_SIZEP2 (GAP_SIZE/2)
#define GAP_SIZEP3 (GAP_SIZEP1 + GAP_SIZEP2)

#define OUTPUT_SIZE (INPUT_SIZE*INPUT_SIZE - KERNEL_SIZE*KERNEL_SIZE + 1)

// Example usage (replace with your actual data)


void conv2d(uint8_t* input, uint8_t* kernel, uint8_t* output) {
    for (int y = 0; y < INPUT_SIZE - KERNEL_SIZE + 1; y++) {
        for (int x = 0; x < INPUT_SIZE - KERNEL_SIZE + 1; x++) {
            uint8_t sum = 0;
            for (int ky = 0; ky < KERNEL_SIZE; ky++) {
                for (int kx = 0; kx < KERNEL_SIZE; kx++) {
                    int in_y = y + ky;
                    int in_x = x + kx;
                    sum += input[in_y * INPUT_SIZE + in_x] * kernel[ky * KERNEL_SIZE + kx];
                }
            }
            output[y * (INPUT_SIZE - KERNEL_SIZE + 1) + x] = sum;
        }
    }
}

void conv2d_0() {
    uint8_t *kernel = (uint8_t*)0x40000000;
    uint8_t *input = (uint8_t*)0x70000000;
    uint8_t *output = (uint8_t*)0x70005000;
    for (int y = 0; y <= GAP_SIZEP1; y++) {
        for (int x = 0; x <= GAP_SIZE; x++) {
            uint8_t sum = 0;
            for (int ky = 0; ky < KERNEL_SIZE; ky++) {
                for (int kx = 0; kx < KERNEL_SIZE; kx++) {
                    int in_y = y + ky;
                    int in_x = x + kx;
                    sum += input[in_y * INPUT_SIZE + in_x] * kernel[ky * KERNEL_SIZE + kx];
                }
            }
            output[y * GAP_SIZE1 + x] = sum;
        }
    }
}

void conv2d_1() {
    uint8_t *kernel = (uint8_t*)0x40001000;
    uint8_t *input = (uint8_t*)0x70000000;
    uint8_t *output = (uint8_t*)0x70005000;
    for (int y = GAP_SIZEP1+1; y <= GAP_SIZEP2; y++) {
        for (int x = 0; x <= GAP_SIZE; x++) {
            uint8_t sum = 0;
            for (int ky = 0; ky < KERNEL_SIZE; ky++) {
                for (int kx = 0; kx < KERNEL_SIZE; kx++) {
                    int in_y = y + ky;
                    int in_x = x + kx;
                    sum += input[in_y * INPUT_SIZE + in_x] * kernel[ky * KERNEL_SIZE + kx];
                }
            }
            output[y * GAP_SIZE1 + x] = sum;
        }
    }
}

void conv2d_2() {
    uint8_t *kernel = (uint8_t*)0x40002000;
    uint8_t *input = (uint8_t*)0x70000000;
    uint8_t *output = (uint8_t*)0x70005000;
    for (int y = 0; y <= GAP_SIZE; y++) {
        for (int x = GAP_SIZEP2+1; x <= GAP_SIZEP3; x++) {
            uint8_t sum = 0;
            for (int ky = 0; ky < KERNEL_SIZE; ky++) {
                for (int kx = 0; kx < KERNEL_SIZE; kx++) {
                    int in_y = y + ky;
                    int in_x = x + kx;
                    sum += input[in_y * INPUT_SIZE + in_x] * kernel[ky * KERNEL_SIZE + kx];
                }
            }
            output[y * GAP_SIZE1 + x] = sum;
        }
    }
}

void conv2d_3() {
    uint8_t *kernel = (uint8_t*)0x40003000;
    uint8_t *input = (uint8_t*)0x70000000;
    uint8_t *output = (uint8_t*)0x70005000;
    for (int y = 0; y <= GAP_SIZE; y++) {
        for (int x = GAP_SIZEP3+1; x <= GAP_SIZE; x++) {
            uint8_t sum = 0;
            for (int ky = 0; ky < KERNEL_SIZE; ky++) {
                for (int kx = 0; kx < KERNEL_SIZE; kx++) {
                    int in_y = y + ky;
                    int in_x = x + kx;
                    sum += input[in_y * INPUT_SIZE + in_x] * kernel[ky * KERNEL_SIZE + kx];
                }
            }
            output[y * GAP_SIZE1 + x] = sum;
        }
    }
}

int main(int argc, char **arv) {
  
    REG32(uart, UART_REG_TXCTRL) = UART_TXEN;

    uint64_t t_start, t_end;
    uint64_t t_gap;

    uint64_t intr_start, instr_end;
    uint64_t inst_gap;

    uint8_t *cp = (uint8_t *)0x70000000;

    // uint8_t input[INPUT_SIZE*INPUT_SIZE]; // 3x3 input
    uint8_t kernel[KERNEL_SIZE*KERNEL_SIZE]; // Sharpen kernel
    // uint8_t output[OUTPUT_SIZE];

    uint8_t *kernel_0 = (uint8_t*)0x40000000;
    uint8_t *kernel_1 = (uint8_t*)0x40001000;
    uint8_t *kernel_2 = (uint8_t*)0x40002000;
    uint8_t *kernel_3 = (uint8_t*)0x40003000;

    uint8_t *input = (uint8_t*)0x70000000;
    uint8_t *output = (uint8_t*)0x70005000;

    for (int i = 0; i < INPUT_SIZE*INPUT_SIZE; i ++)
        input[i] = i;

    for (int i = 0; i < KERNEL_SIZE*KERNEL_SIZE; i++) {
        kernel_0[i] = i;
        kernel_1[i] = i;
        kernel_2[i] = i;
        kernel_3[i] = i;
    }   

    for (int i = 0; i < OUTPUT_SIZE; i ++)
        output[i] = 0;

    // ============ Serial =======================
    t_start = read_csr(mcycle); 
    intr_start = read_csr(minstret); 
    conv2d(input, kernel, output);
    t_end = read_csr(mcycle);
    instr_end = read_csr(minstret); 
    t_gap = t_end - t_start;
    inst_gap = instr_end - intr_start;

    kprintf("Input size/Kernel size = %l/%l ===========\r\n", INPUT_SIZE, KERNEL_SIZE);
    kprintf("Instr (single): %l\r\n", inst_gap);
    kprintf("Time spent (single): %l (cycles)\r\n", t_gap);

    
    // ============ Parallel =======================
    t_start = read_csr(mcycle); 
    REG32(clint, CLINT_MSIP1) = CLINT_MSIPEN;
    REG32(clint, CLINT_MSIP2) = CLINT_MSIPEN;
    REG32(clint, CLINT_MSIP3) = CLINT_MSIPEN;
    conv2d_0();
    t_end = read_csr(mcycle);
    t_gap = t_end - t_start;

    kprintf("Time spent (multi): %l (cycles)\r\n", t_gap);   

    for (int i = 0; i < OUTPUT_SIZE; i++)
        *cp = output[i];

    return 0;
}
