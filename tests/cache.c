#include <stdio.h>
#include <stdlib.h>
#include <riscv-pk/encoding.h>

#define N (8192/sizeof(int))

int *data;
int *flush;

int main(void) {

  data = (int*)malloc(N * sizeof(int)); // Allocate 8-KB
  flush = (int*)malloc(N * sizeof(int)); // Allocate 8-KB
  int local;

  for (int i = 0; i < N; i ++)
  	data[i] = i + 1;

  for (int i = 0; i < N; i ++)
  	local = data[i];

  for (int i = 0; i < N; i ++)
  	flush[i] = i + 1;

  printf("Test completed!!! \n\r");

  return 0;
}