#include <stdio.h>
#include <stdlib.h>

int main() {

  // Iniciar variaveis 'soma' e valor_natural'
  int soma, valor_natural = 0;

  //
  printf("Informe o valor natural: ");
  scanf("%d", &valor_natural);

  soma += valor_natural;
  printf("O valor de i: %d - Soma de i: %d \n", valor_natural, soma);

  return 0;

}