#include <stdio.h>
#include <riscv-pk/encoding.h>
#include "rocc.h"

int main(void) {
    uint32_t addr;
    uint32_t wdata = 100;
    uint32_t rdata;

    // asm volatile ("fence");

    printf("RoCC Enable\r\n");
    ROCC_INSTRUCTION_DSS(1, rdata, addr, wdata, 0); // Active the core

    // Just loop to see the behaviour of cache
    while (1);

    return 0;
}