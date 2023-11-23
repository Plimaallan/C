#include <stdio.h>
#include <stdlib.h>

int main() {
  int mat_Valores[3][2];
  mat_Valores[0][0] = 5;
  mat_Valores[1][0] = 10;
  mat_Valores[2][0] = 15;
  mat_Valores[0][1] = 50;
  mat_Valores[1][1] = 100;
  mat_Valores[2][1] = 150;
  for (int linha = 0; linha < 3; linha++) {
    for (int coluna = 0; coluna < 2; coluna++) {
      printf("%d\t", mat_Valores[linha][coluna]);
    }
    printf("\n");
  }
}