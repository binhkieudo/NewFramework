#################################
# RISCV Toolchain
#################################

ROOT_DIR := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))
BUILD_DIR := $(ROOT_DIR)build

CC=$(RISCV)/bin/riscv64-unknown-elf-gcc
OBJCOPY=$(RISCV)/bin/riscv64-unknown-elf-objcopy
OBJDUMP=$(RISCV)/bin/riscv64-unknown-elf-objdump
CFLAGS=-march=rv64gc -mcmodel=medany -Ofast -std=gnu11 -Wall -nostartfiles
CFLAGS+= -fno-common -fno-builtin -g -DENTROPY=0 -mabi=lp64 -DNONSMP_HART=0
CFLAGS+= -I $(ROOT_DIR)/include -I.
LFLAGS=-static -L $(ROOT_DIR)/linker -T hello.elf.lds

PBUS_CLK ?= 1000000


default : elf bin dump

elf := $(BUILD_DIR)/main.elf
$(elf): main.c crt0.S kprintf.c
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -DTL_CLK="$(PBUS_CLK)UL" $(LFLAGS) -o $@ crt0.S main.c kprintf.c

.PHONY: elf
elf: $(elf)

bin := $(BUILD_DIR)/main.bin
$(bin): $(elf)
	mkdir -p $(BUILD_DIR)
	$(OBJCOPY) -O binary $< $@


.PHONY: bin
bin: $(bin)

dump := $(BUILD_DIR)/main.dump
$(dump): $(elf)
	$(OBJDUMP) -D -S $< > $@

.PHONY: dump
dump: $(dump)

.PHONY: clean
clean::
	rm -rf $(BUILD_DIR)
