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
  
## Instructions

Clone using:

```shell
git clone https://github.com/binhkieudo/NewFramework.git
cd NewFramework
git checkout dev
```

## Install conda enviroment

Download and install Anaconda first

```shell
wget https://repo.anaconda.com/archive/Anaconda3-2023.09-0-Linux-x86_64.sh
sudo chmod a+x ./Anaconda3-2023.09-0-Linux-x86_64.sh
./Anaconda3-2023.09-0-Linux-x86_64.sh
```

Then install conda-lock for "base" environment

```shell
conda install -n base conda-lock=1.4
```

Install additional dependencies

```shell
sudo apt-get install libguestfs-tools
```

Add read privileges to the kernel

```shell
sudo chmod +r /boot/vmlinuz-*
reboot
```

## Build chipyard enviroment

Active coda first

```shell
conda activate
```
Then build the related tools

```shell
echo y | ./build-setup.sh riscv-tools
```

## Active chipyard environment

You have to active the chipyard environment whenever working with chipyard framework.

```shell
source env.sh
```

## Prepare SD-card 
You'll need the gptfdisk tool to format the SD card

Download and install gptfdisk
```shell
git clone https://github.com/tmagik/gptfdisk.git
cd gptfdisk
make -j`nproc`
```

Connect the SD-card to your PC, then:
```shell
cd gptfdisk/
sudo ./gdisk /dev/sd?
```
Where ? points to the SD card.

After opening the SD card, check the existing partitions by pressing p, then Enter.
<img src="https://github.com/binhkieudo/riscv_framework/assets/22954544/9ce04d3a-1c11-4ff5-b44c-31357dc6454c" alt="drawing" width="700"/>

Delete all existing partitions by command d with the corresponding partition's number. 
<img src="https://github.com/binhkieudo/riscv_framework/assets/22954544/442702fc-610e-44b7-bcbb-5c5b13bf88fe" alt="drawing" width="600"/>

Then format the SD Card with the following options:
<img src="https://github.com/binhkieudo/riscv_framework/assets/22954544/2931ed12-4bef-4e6e-96b7-551d8059d15a" alt="drawing" width="700"/>

After formatting the SD Card, print the new partition and save the configurations.
<img src="https://github.com/binhkieudo/riscv_framework/assets/22954544/a657a6da-617b-409a-8b2f-4f7ec7f96128" alt="drawing" width="700"/>

## Build your first tiny FPGA prototype (currently support Arty100T, VC707, VCU118)

Vivado must be in your PATH

To reduce the BootROM size

In file /riscv_framework/generators/rocket-chip/src/main/scala/devices/tilelinkBootROM.scala

Replace line 79
```shell
rom.array() ++ subsystem.dtb.contents
```
by
```shell
rom.array() //++ subsystem.dtb.contents
```

(Note: do not remove dtb from BootROM in case you would like to boot linux).

Enter framework folder
```shell
cd framework
```

Build the bitstream with your selected configuration.
```shell
make SUB_PROJECT=vc707_rocketsmall bitstream
```

After generating ".bit" file, connect the VC707 board to your PC (make sure that the rules for Digilent cable are defined beforehand). Then program the board.
```shell
make download_bitstream
```
