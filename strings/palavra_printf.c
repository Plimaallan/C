#include <stdio.h>
#include <stdlib.h>

int main() {

  // Cria um array para 20 caracteres e \0
  char palavra[20];

  // Solicita o input para o array 'palavra'
  printf("Digite uma palavra: ");

  /* 
   * scanf recebe o input para o array 'palavra', 
   * ate encontrar o primeiro espaco ou primeiro enter
  */
  scanf("%s", palavra);

  // Imprime o valor do array 'palavra'
  printf("Palavra lida pelo printf %s\n", palavra);

  return 0;

}