#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  int sudoku[4][4];
  int seq[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  //mezclamos seq
  for (size_t i = 0; i < count; i++) {
    int r = rand() % 9;
    int s = rand() % 9;
    int temp = seq[r];
    seq[r] = seq[s];
    seq[s] = temp;
  }
  //indice para sacar los seq

  //llena con randoms los 9
  //y hace suma de las filas
  for (int i = 0; i < 4; i++) {
    int sum = 0;
    for (int j = 0; j < 4; j++) {
      if (i != 3 && j != 3) {
        sudoku[i][j] = (rand() % 9) + 1;
        sum += sudoku[i][j];
      } else {
        sudoku[i][j] = sum;
      }
    }
  }
  //suma de columnas
  for (int i = 0; i < 4; i++) {
    int sum = 0;
    for (int j = 0; j < 4; j++) {
      if (j != 3) {
        sum += sudoku[i][j];
      } else {
        sudoku[i][j] = sum;
      }
    }
  }
  //imprimir la matriz
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%.02d ", sudoku[i][j]);
    }
    printf("\n");
  }
  return 0;
}
//ME FALTA TERMINARLO :(
