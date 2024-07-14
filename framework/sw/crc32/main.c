// #include <stdio.h>
#include <stdint.h>
#include <riscv-pk/encoding.h>
#include "include/platform.h"
#include "kprintf.h"

static volatile uint32_t * const clint = (void *)(CLINT_CTRL_ADDR);

#define REG32(p, i)	((p)[(i) >> 2])
#define LENGTH 256
// CRC-32 polynomial (reversed)
#define CRC32_POLY 0xEDB88320

// Table-driven CRC calculation
uint32_t crc32(const uint8_t *data, uint32_t* table) {
    uint32_t crc = 0xFFFFFFFF; // Initial CRC value

    for (int i = 0; i < LENGTH; i++) {
        crc = (crc >> 8) ^ table[(crc ^ *data++) & 0xFF];
    }

    return ~crc; // Finalize the CRC
}

void crc32p0() {
    uint32_t crc = 0xFFFFFFFF; // Initial CRC value
    uint32_t *table = (uint32_t*)0x40000000;
    uint8_t *data = (uint8_t*)0x70001000;
    uint32_t *cp = (uint32_t*)0x70001000;

    for (int i = 0; i < LENGTH; i++) {
        crc = (crc >> 8) ^ table[(crc ^ *data++) & 0xFF];
    }

    *cp = ~crc;
}

void crc32p1() {
    uint32_t crc = 0xFFFFFFFF; // Initial CRC value
    uint32_t *table = (uint32_t*)0x40001000;
    uint8_t *data = (uint8_t*)0x70003000;
    uint32_t *cp = (uint32_t*)0x70003000;

    for (int i = 0; i < LENGTH; i++) {
        crc = (crc >> 8) ^ table[(crc ^ *data++) & 0xFF];
    }

    *cp = ~crc;
}

void crc32p2() {
    uint32_t crc = 0xFFFFFFFF; // Initial CRC value
    uint32_t *table = (uint32_t*)0x40002000;
    uint8_t *data = (uint8_t*)0x70005000;
    uint32_t *cp = (uint32_t*)0x70005000;

    for (int i = 0; i < LENGTH; i++) {
        crc = (crc >> 8) ^ table[(crc ^ *data++) & 0xFF];
    }

    *cp = ~crc;
}

void crc32p3() {
    uint32_t crc = 0xFFFFFFFF; // Initial CRC value
    uint32_t *table = (uint32_t*)0x40003000;
    uint8_t *data = (uint8_t*)0x70007000;
    uint32_t *cp = (uint32_t*)0x70007000;
    
    for (int i = 0; i < LENGTH; i++) {
        crc = (crc >> 8) ^ table[(crc ^ *data++) & 0xFF];
    }

    *cp = ~crc;
}

int main(int argc, char **arv) {
  
    REG32(uart, UART_REG_TXCTRL) = UART_TXEN;

    kprintf("Start...\r\n");
    uint64_t t_start, t_end;
    uint64_t t_gap;

    uint64_t intr_start, instr_end;
    uint64_t inst_gap;

    uint32_t *cp0 = (uint32_t*)0x70001000;
    uint32_t *cp1 = (uint32_t*)0x70003000;
    uint32_t *cp2 = (uint32_t*)0x70005000;
    uint32_t *cp3 = (uint32_t*)0x70007000;

    uint32_t *table = (uint32_t*)0x70000000;

    uint32_t *table0 = (uint32_t*)0x40000000;
    uint32_t *table1 = (uint32_t*)0x40001000;
    uint32_t *table2 = (uint32_t*)0x40002000;
    uint32_t *table3 = (uint32_t*)0x40003000;

    uint8_t msg[LENGTH];

    uint8_t *msg0 = (uint8_t*)0x70001000;
    uint8_t *msg1 = (uint8_t*)0x70003000;
    uint8_t *msg2 = (uint8_t*)0x70005000;
    uint8_t *msg3 = (uint8_t*)0x70007000;

    // Generate table
    uint32_t poly = CRC32_POLY;
    for (uint32_t i = 0; i < 256; i++) {
        uint32_t crc = i;
        for (uint32_t j = 0; j < 8; j++) {
            if (crc & 1) {
                crc = (crc >> 1) ^ poly;
            } else {
                crc >>= 1;
            }
        }
        table[i] = crc;
        table0[i] = crc;
        table1[i] = crc;
        table2[i] = crc;
        table3[i] = crc;
    }

    for (int i = 0; i < LENGTH; i++) {
        msg[i] = i%256;
        msg0[i] = i%256;
        msg1[i] = i%256;
        msg2[i] = i%256;
        msg3[i] = i%256;
    }

    // ============ Serial =======================
    kprintf("TEST LENGTH %l ===========\r\n", LENGTH);
    t_start = read_csr(mcycle); 
    intr_start = read_csr(minstret); 
    *cp0 = crc32(msg, table);
    t_end = read_csr(mcycle);
    instr_end = read_csr(minstret); 
    t_gap = t_end - t_start;
    inst_gap = instr_end - intr_start;

    kprintf("Instr (single): %l\r\n", inst_gap);
    kprintf("Time spent (single): %l (cycles)\r\n", t_gap);

    // ============ Serial =======================
    t_start = read_csr(mcycle); 
    intr_start = read_csr(minstret); 
    *cp0 = crc32(msg, table);
    *cp1 = crc32(msg, table);
    *cp2 = crc32(msg, table);
    *cp3 = crc32(msg, table);
    t_end = read_csr(mcycle);
    instr_end = read_csr(minstret); 
    t_gap = t_end - t_start;
    inst_gap = instr_end - intr_start;

    kprintf("Instr (single): %l\r\n", inst_gap);
    kprintf("Time spent (quad): %l (cycles)\r\n", t_gap);

    // ============ Parallel =======================
    t_start = read_csr(mcycle); 
    intr_start = read_csr(minstret); 
    REG32(clint, CLINT_MSIP1) = CLINT_MSIPEN;
    REG32(clint, CLINT_MSIP2) = CLINT_MSIPEN;
    REG32(clint, CLINT_MSIP3) = CLINT_MSIPEN;
    crc32p0();
    t_end = read_csr(mcycle);
    instr_end = read_csr(minstret); 
    t_gap = t_end - t_start;
    inst_gap = instr_end - intr_start;
    kprintf("Time spent (parallel): %l (cycles)\r\n", t_gap);

    return 0;
}
