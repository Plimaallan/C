#include <stdio.h>
#include <stdlib.h>

int main() {

  // Cria dois arrays para 20 caracteres e '\0'
  char palavra[20] = "Allan Lima";
  char nome[20];

  // Percorre os caracteres do arrays 'palavra' e copia para 'nome'
   for (int i = 0; palavra[i] != '\0'; i++) {
    nome[i] = palavra[i];
  }

  // Imprime os valores de 'palavra' e 'nome'
  printf("Array palavra: %s\n", palavra);
  printf("Array nome: %s\n", nome);

  return 0;

}