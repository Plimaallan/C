#include <stdio.h>
#include <stdlib.h>

#define MESES 12

int main() {

  // Array com a quantidade de dias de cada mês do ano
  int dias[MESES] = { 31, 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31 };

  // For para imprimir quantos dias tem cada mês
  for (int i = 0; i < MESES; i++) {
    printf("Mês %2d tem %2d dias\n", i + 1, dias[i]);
  } // Fim for MESES

  return 0;

}