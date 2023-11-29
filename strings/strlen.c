#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  // Cria um array para 20 caracteres e '\0'
  char nome[20] = "Allan Lima";

  // Recebe o numero de caracteres de 'nome'
  int tamanho_nome = strlen(nome);

  // Imprime os valores de 'nome' e 'tamanho_nome'
  printf("O nome %s tem %d caracteres\n", nome, tamanho_nome);

  return 0;

}