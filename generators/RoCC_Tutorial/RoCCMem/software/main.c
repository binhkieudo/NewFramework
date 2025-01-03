#include <stdio.h>
#include <riscv-pk/encoding.h>
#include "rocc.h"

int main(void) {

    // Force compiler to align data
    uint64_t src[32] __aligned(8);
    uint64_t dest[32] __aligned(8);

    // Init data
    for (int i = 0; i < 32; i++) {
        src[i] = i + 1;
        dest[i] = 0;
    }

    // Active RoCC Accel
    asm volatile ("fence");

    // The accel load data from src
    // the data will be add with offset (funct7) 
    // and writeback to dest
    ROCC_INSTRUCTION_SS(0, src, dest, 30);

    asm volatile ("fence" ::: "memory"); // memory barrier

    // Print the data in dest
    for (int i = 0; i < 32; i++) {
        printf("dest[%d] = %ld\r\n", i, dest[i]);
    } 
    return 0;
}