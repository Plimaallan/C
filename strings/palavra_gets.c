#include <stdio.h>
#include <stdlib.h>

int main() {

  // Cria um array para 20 caracteres e \0
  char palavra[20];

  // Solicita o input para o array 'palavra'
  printf("Digite uma palavra: ");

  /* 
   * gets recebe o input para o array 'palavra', 
   * ate encontrar o primeiro enter
  */
  gets(palavra);

  // Imprime o valor do array 'palavra'
  printf("Palavra lida pelo gets %s\n", palavra);

  return 0;

}