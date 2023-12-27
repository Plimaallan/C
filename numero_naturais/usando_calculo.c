#include <stdio.h>
#include <stdlib.h>

int main() {

  // Iniciar variaveis 'soma' e 'valor_natural'
  int soma, valor_natural = 0;

  // Recebe o valor naturalr
  printf("Informe o valor natural: ");
  scanf("%d", &valor_natural);

  soma += valor_natural;
  printf("O valor natural é: %d - Soma do valor natural é: %d \n", valor_natural, soma);

  return 0;

}