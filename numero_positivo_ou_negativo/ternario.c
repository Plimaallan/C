#include <stdio.h>

int main() {

  int numeroPositivoNegativo = 0;

  // Verifica se o número é positivo, negativo ou zero
  if (numeroPositivoNegativo == 0) {
    printf("O número é zero");
  } else {
    (numeroPositivoNegativo > 0) ? printf("O número é positivo"): printf("O número é negativo");
  }
  
  return 0;

}