#include <stdio.h>
#include <stdlib.h>

int main() {

  // Cria um array para 6 caracteres e \0
  char palavra[6] = {'C', 'a', 'r', 'r', 'o', '\0'};
  char nome[20] = "Allan Lima";

  // Imprime os valores de 'palavra' e 'nome'
  printf("Array palavra: %s\n", palavra);
  printf("Array nome: %s\n", nome);

  return 0;

}