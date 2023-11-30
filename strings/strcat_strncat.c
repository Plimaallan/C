#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  // Cria dois arrays para 20 caracteres e '\0'
  char nome[20] = "Allan";
  char sobrenome[20] = "Lima";

  // junta 'nome' e 'sobrenome'
  strcat(nome, sobrenome);

  // junta 'sobrenome' e os 5 primeiros caractere de 'nome'
  strncat(sobrenome, nome, 5);

  // Imprime os valores de 'nome' e 'sobrenome'
  printf("Nome: '%s'\nSobrenome: '%s'\n", nome, sobrenome);

  return 0;

}