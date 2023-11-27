#include <stdio.h>
#include <stdlib.h>

int main() {

  // Matriz lista de valores
  int lista[3][3] = {{10, 15, 12}, 
                     {12, 14, 15}, 
                     {16, 19, 18}};

  // Iniciar variaveis 'soma'
  int soma = 0;

  // Percorrer valores das linhas da matriz
  for (int linha = 0; linha < 3; linha++) {

    // Percorrer valores das colunas da matriz
    for (int coluna = 0; coluna < 3; coluna++) {

      // Soma recebe soma + valor da matriz
      soma = soma + lista[linha][coluna];

      // Imprime a posicao do index da matriz e o valor
      printf("L%dC%d: %d <>>> %d --- ", linha, coluna, lista[linha][coluna], soma);

    } // Fim for coluna

    // Quebrar a linha
    printf("\n");

  } // Fim for linha

  return 0;

}