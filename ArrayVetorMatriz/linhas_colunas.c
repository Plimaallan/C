#include <stdio.h>
#include <stdlib.h>

int main() {

  // Matriz lista de valores
  int lista[3][3] = {{5, 10, 15}, {30, 60, 90}, {120, 150, 180}};

  // Percorrer valores das linhas da matrix
  for (int linha = 0; linha < 3; linha++) {

    // Percorrer valores das colunas da matrix
    for (int coluna = 0; coluna < 3; coluna++) {

      // Imprimir os valores das colunas
      printf("%d\t", lista[linha][coluna]);

    } // Fim for coluna

    // Quebrar a linha
    printf("\n");

  } // Fim for linha

  return 0;

}