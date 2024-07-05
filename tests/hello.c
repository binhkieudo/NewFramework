#include <stdio.h>
#include <riscv-pk/encoding.h>
#include "marchid.h"

#define SIZE 64

int main(void) {
  // uint64_t marchid = read_csr(marchid);
  unsigned long tstart = 0;
	unsigned long tend = 0;
  
  // const char* march = get_march(marchid);
  int a[SIZE][SIZE];
  int b[SIZE][SIZE];
  int c[SIZE][SIZE];

  for (int i = 0; i < SIZE; i = i + 1) {
    for (int j = 0; j < SIZE; j = j + 1) {
      a[i][j] = i;
      b[i][j] = i + 1;
      c[i][j] = 0;
    }
  }

  tstart = read_csr(mcycle);
  for (int i = 0; i < SIZE; i = i + 1) {
    for (int j = 0; j < SIZE; j = j + 1) {
      c[i][j] = 0;
      for (int k = 0; k < SIZE; k = k + 1)
        c[i][j] += a[i][k] * c[k][j];
    }
  }
  tend = read_csr(mcycle);
  printf("Cycles= %ld\n", tend - tstart);
  return 0;
}
