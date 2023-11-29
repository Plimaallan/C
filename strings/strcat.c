#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  // Cria dois arrays para 20 caracteres e '\0'
  char nome[20] = "Allan";
  char sobrenome[20] = "Lima";

  // junta 'nome' e 'sobrenome'
  strcat(nome, sobrenome);

  // Imprime os valores de 'nome' e 'sobrenome'
  printf("Nome: '%s'\nSobrenome: '%s'\n", nome, sobrenome);

  return 0;

}