#include <stdio.h>
#include <stdlib.h>

int main() {

  // Array com 10 valores com indexes definidos
  int lista[10] = { [2] = 10,[0] = 15,[1] = 12,[4] = 13,[3] = 11,
                  [9] = 14,[5] = 17,[7] = 16,[6] = 19,[8] = 18 };

  // Variável para receber a soma de todos os valores
  int soma = 0;

  // For percorre e imprime todos os valores da soma
  for (int i = 0; i < 10; i++) {
    soma = soma + lista[i];
    printf("Total %d: %d \n", i, soma);
  } // Fim for soma

  return 0;

}