#include <stdio.h>
#include <stdlib.h>

int main() {
  int lista[10] = {10, 15, 12, 12, 14, 15, 16, 19, 18, 20};
  int soma = 0;
  for (int i = 0; i < 10; i++) {
    soma = soma + lista[i];
    printf("Total %d: %d \n", i, soma);
  }
}