#include <stdio.h>

int main() {

  int numeroInformado;

  printf("Informe o numero: ");
  scanf("%d", &numeroInformado);

  // Verifica se o número é divisível por 2
  if (numeroInformado % 2 == 0) {
    printf("O numero informado %d é par", numeroInformado);
  }
  else {
    printf("O numero informado %d é impar", numeroInformado);
  }

  return 0;

}