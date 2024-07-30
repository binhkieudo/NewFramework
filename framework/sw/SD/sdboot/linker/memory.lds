MEMORY
{
  bootrom_mem (rx) : ORIGIN = 0x70000000, LENGTH = 0x2000
  memory_mem (rwx) : ORIGIN = 0x70002000, LENGTH = 0x1000
}
