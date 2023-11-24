#include <stdio.h>
#include <stdlib.h>

int main() {
  int lista[3][3] = {{10, 15, 12}, {12, 14, 15}, {16, 19, 18}};
  int soma = 0;
  for (int linha = 0; linha < 3; linha++) {
    for (int coluna = 0; coluna < 3; coluna++) {
      soma = soma + lista[linha][coluna];
      printf("L%dC%d: %d <>>> %d --- ", linha, coluna, lista[linha][coluna], soma);
    }
    printf("\n");
  }
}