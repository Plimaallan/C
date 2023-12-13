#include <stdio.h>
#include <stdlib.h>

int main() {
  int lista[10] = {[2] = 10, [0] = 15, [1] = 12, [4] = 13, [3] = 11,
                  [9] = 14, [5] = 17, [7] = 16, [6] = 19, [8] = 18};
  int soma = 0;
  for (int i = 0; i < 10; i++) {
    soma = soma + lista[i];
    printf("Total %d: %d \n", i, soma);
  }
}