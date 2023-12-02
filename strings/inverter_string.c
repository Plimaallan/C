#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  // Cria dois arrays para 11 caracteres e '\0'
  char nome[20] = "Allan Lima";
  char nome_invertido[20];

  // Recebe o numero de caractere da variavel 'nome'
  char nome_tamanho = strlen(nome);

  // Inverter usando for e imprimindo caractere por caractere
  for (int i = nome_tamanho - 1; i >= 0; i--) {
    printf("%c", nome[i]);
  }

  // Inverter usando for para transferir os caracteres de 'nome' para 'nome_invertido'
  for (int i = nome_tamanho; i >= 0; i--) {
    nome_invertido[i] = nome[nome_tamanho - 1 - i];
  }

  // Imprimir o array 'nome_invertido'
  printf("\nNome invertido: %s\n", nome_invertido);

  // Inverter usando for para transferir os caracteres de 'nome' para 'valor_index' e 'nome'
  char letra_temporaria;
  for (int i = 0; i < nome_tamanho / 1; i++) {
    letra_temporaria = nome[i];
    nome[i] = nome[nome_tamanho - 1 - i];
    nome[nome_tamanho - 1 - i] = letra_temporaria;
  }

  // Imprimir o array 'nome'
  printf("Nome corrigido: %s\n", nome);

  return 0;

}