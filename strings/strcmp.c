#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  // Cria duas arrays para 20 caracteres e '\0'
  char nome_1[20] = "Linguagem C";
  char nome_2[20] = "Linguagem C";

  // Compara se 'nome_1' e 'nome_2' sao iguais ou diferente
  if (strcmp(nome_1, nome_2) == 0) {
    printf("Nome 1: '%s' e Nome 2: '%s' sao iguais", nome_1, nome_2);
  } else {
    printf("Nome 1: '%s' e Nome 2: '%s' sao diferentes", nome_1, nome_2);
  }

  return 0;

}