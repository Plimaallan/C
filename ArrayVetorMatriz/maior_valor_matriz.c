#include <stdio.h>
#include <stdlib.h>

int main() {
  int lista[3][3] = {{10, 15, 13}, {12, 14, 17}, {16, 19, 18}};
  int maior_valor, maior_valor_retido, valor_index = 0;
  for (int linha = 0; linha < 3; linha++) {
    for (int coluna = 0; coluna < 3; coluna++) {
      valor_index = lista[linha][coluna];
      maior_valor_retido = maior_valor;
      if (maior_valor < lista[linha][coluna]) {
        maior_valor = lista[linha][coluna];
      }
      printf("Maior Valor Retido: %d <> Valor index: %d = Maior Valor: %d \n", maior_valor_retido, valor_index, maior_valor);
    }
  }
  return 0;
}