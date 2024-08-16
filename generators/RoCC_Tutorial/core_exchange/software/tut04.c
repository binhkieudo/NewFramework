#include <stdio.h>
#include <riscv-pk/encoding.h>
#include "rocc.h"

int main(void) {
    uint32_t addr;
    uint32_t wdata = 100;
    uint32_t rdata;

    // asm volatile ("fence");

    printf("Start writting\r\n");
    // Write data
    for (addr = 0; addr < 32; addr++) {
        printf("Write address[%d] <-- %d\r\n", addr, wdata);
        ROCC_INSTRUCTION_SS(1, wdata, addr, 0);
        wdata++;
    }

    printf("Start reading\r\n");
    // Read data
    for (addr = 0; addr < 32; addr++) {
        ROCC_INSTRUCTION_DS(0, rdata, addr, 0);
        printf("Read [%d]: %d\r\n", addr, rdata);
    }

    printf("Start reading\r\n");
    // Read data
    for (addr = 0; addr < 32; addr++) {
        ROCC_INSTRUCTION_DS(2, rdata, addr, 0);
        printf("Read [%d]: %d\r\n", addr, rdata);
    }

    return 0;
}