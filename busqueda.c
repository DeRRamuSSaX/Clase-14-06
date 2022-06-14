//Escribir un programa que reciba un argumento de tipo string y busque en un array conocido en tiempo de compilacion si el string esta en el array. Si esta el programa devuelve el ındice del elemento y de lo contrario devuelve 1.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *busqueda = argv[1];
  char *palabras[] = {
    "byron",
    "alex",
    "valentin",
    "pedro",
    "soto",
    "tehuel",
    "kevin"
  };
  for (int i = 0; i < 7; i++) {
    int j = 0;
    while (busqueda[j] != 0) {
      if (busqueda[j] != palabras[i][j]) break;
      j++;
    }
    if (busqueda[j] == 0 && palabras[i][j] == 0) {
      printf("%d\n", i);
      return 0;
    }
  }
  printf("-1\n");
  return 1;
}
