#include <stdio.h>
#include <stdlib.h>
#include "memoryAssignment.c"

int test() {
  
  // 2d array
  int num[3][4] = {
    {1, 2,  3,  4},
    {5, 6,  7,  8},
    {9, 10, 11, 12}
  };
  
  int
    ROWS = 3,
    COLS = 3,
    i, j;

  int **mat = geraMatrizNXN(3);
  int *ptr = &mat[0][0];
  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {
      printf("%d ", *(ptr + i * COLS + j));
    }
    printf("\n");
  }
  
  return 0;
}
