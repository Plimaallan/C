#include <stdio.h>
#include <stdlib.h>

int main() {

  // Cria dois arrays para 6 e 20 caracteres e '\0'
  char palavra[6] = {'C', 'a', 'r', 'r', 'o', '\0'};
  char nome[20] = "Allan Lima";

  // Imprime os valores de 'palavra' e 'nome'
  printf("Array palavra: %s\n", palavra);
  printf("Array nome: %s\n", nome);

  // Caractere '\0'(null) indica o fim de uma string
  palavra[3] = '\0';
  printf("Array palavra: %s\n", palavra);

  return 0;

}