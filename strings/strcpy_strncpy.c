#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  // Cria tres arrays para 20 caracteres e '\0'
  char nome_completo[20] = "Allan Lima";
  char copiar_nome[20];
  char primeiro_nome[20];

  // Copia 'nome_completo' para 'copiar_nome'
  strcpy(copiar_nome, nome_completo);

  // Copia os 5 primeiros caracteres de 'nome_completo' para 'primeiro_nome'
  strncpy(primeiro_nome, nome_completo, 5);

  // Imprime os valores de 'nome_completo', 'copiar_nome' e 'primeiro_nome'
  printf("Nome completo: '%s'\nNome copiado: '%s'\nPrimeiro nome: '%s'\n", nome_completo, copiar_nome, primeiro_nome);

  return 0;

}