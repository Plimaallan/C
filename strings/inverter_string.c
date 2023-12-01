#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  // Cria dois arrays para 11 caracteres e '\0'
  char nome[11] = "Allan Lima";
  char nome_invertido[11];

  // Recebe o numero de caractere da variavel 'nome'
  char nome_tamanho = strlen(nome) - 1;

  // Inverter usando for e imprimindo caractere por caractere
  for (int i = nome_tamanho; i >= 0; i--) {
    printf("%c", nome[i]);
  }

  // Inverter usando for para transferir os caracteres de 'nome' para 'nome_invertido'
  for (int i = nome_tamanho; i >= 0; i--) {
    nome_invertido[i] = nome[nome_tamanho - i];
  }

  // Imprimir o array 'nome_invertido'
  printf("\nNome invertido: %s\n", nome_invertido);

  return 0;

}