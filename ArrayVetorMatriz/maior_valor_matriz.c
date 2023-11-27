#include <stdio.h>
#include <stdlib.h>

int main() {

  // Matriz lista de valores
  int lista[3][3] = {{10, 15, 13}, 
                     {12, 14, 17}, 
                     {16, 19, 18}};
                     
  // Iniciar variaveis 'maior_valor', 'valor_retido' e 'valor_index'
  int maior_valor, valor_retido, valor_index = 0;

  // Percorrer valores das linhas da matriz
  for (int linha = 0; linha < 3; linha++) {

    // Percorrer valores das coluna da matriz
    for (int coluna = 0; coluna < 3; coluna++) {
      valor_index = lista[linha][coluna];
      valor_retido = maior_valor;

      // Se valor do index for maior que 'maior_valor', fazar a troca
      if (maior_valor < lista[linha][coluna]) {
        maior_valor = lista[linha][coluna];
      }

      // Imprimir valor retido, valor index e maior valor
      printf("Valor Retido: %d <> Valor index: %d = Maior Valor: %d \n", valor_retido, valor_index, maior_valor);

    } // Fim for coluna
  } // Fim for Linha

  return 0;

}