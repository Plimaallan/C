#include <stdio.h>

int main() {

  int numeroInformado;

  printf("Informe o numero: ");
  scanf("%d", &numeroInformado);

  // Verifica se o número é divisível por 2
  (numeroInformado % 2 == 0) ? printf("O numero informado e par") :
                               printf("O numero informado e impar");

  return 0;

}