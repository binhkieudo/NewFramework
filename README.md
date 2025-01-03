# RISC-V Framework
## (Updated) RoCC DMEM Tutorial

### Prepare

Stay in "main" branch to build necessary tools.

Switch to "RoCC_template" branch.

### Structure
The template includes:

- RoCC DMEM configuration: generators/RoCC_Tutorial/RoCCMem/src/main
- RoCC DMEM software: generators/RoCC_Tutorial/RoCCMem/software 

### How it works?

1. RoCC Accel. fetches the source array from memory through DMEM.
2. RoCC Accel. adds each element in the source array with offset (funct7 in this example).
3. RoCC Accel. store results to the destination array.

```shell
ROCC_INSTRUCTION_SS(0, src, dest, 30);
```
Note:
- In this example, all custom instruction opcodes are accepted. You can modify the opcode for multiple accelerators.
- rs1 is used to store the address of source array.
- rs2 is used to store the address of destination array.
- funct7 is used to assign offset. In this example, the offset is 30. You can change it with different values.
- All DMEM interface controller is written in Verilog ("generators/RoCC_Tutorial/RoCCMem/src/main/resources/vsrc/DMemTop.v"). You can modify this Verilog file for your own design.

### Simulation
1. Compile the software in "generators/RoCC_Tutorial/RoCCMem/software"
2. Change directory to "sims/verilator", then run:

```shell
make -j`nproc` run-binary CONFIG=DMEMRocketConfig BINARY=<absolute path to NewFramework>/generators/RoCC_Tutorial/RoCCMem/software/main.riscv LOADMEM=1
```
### Build hardware
1. Change the directory to "framework"
2. Make with default configuration

```shell
make bitstream
```

Note:
- The default configuration is Tinyrocket core on Arty100T with UART and JTAG Debugger.
