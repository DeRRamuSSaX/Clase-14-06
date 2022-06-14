#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//strcmp = es abreviacion de string compare
//devuelve 0 si los dos str son iguales

int main(int argc, char *argv[]) {
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
    if (strcmp(palabras[i] == argv[0]) == 0) {
        printf("%d\n", i);
    }
    j++;
  }
}
  printf("-1\n");
  return 0;
}
