#include <stdio.h>
#include <stdlib.h>

int main() {

  // Array com 10 valores definidos
  int lista[10] = { 10, 15, 12, 12, 14, 15, 16, 19, 18, 20 };

  // Variável para receber a soma de todos os valores
  int soma = 0;

  // For percorre e imprime todos os valores da soma
  for (int i = 0; i < 10; i++) {
    soma = soma + lista[i];
    printf("Total %d: %d \n", i, soma);
  } // Fim for soma

  return 0;
  
}