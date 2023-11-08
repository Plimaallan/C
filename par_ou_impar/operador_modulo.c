#include <stdio.h>

int main() {

  int nroInformado;

  printf("Informe o numero: ");
  scanf("%d", &numeroInformado);

  // Verifica se o número é divisível por 2
  if (numeroInformado % 2 == 0) {
    printf("O numero informado e par");
  } else {
    printf("O numero informado e impar");
  }

  return 0;

}