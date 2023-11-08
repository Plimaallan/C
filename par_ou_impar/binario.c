#include <stdio.h>

// Retorna true se numeroInformado par e false se for impar
int parImpar(int numeroInformado) {

    // Se (numeroInformado & 1) for 1, é par, senão impar
    return (!(numeroInformado & 1));

}

int main() {

  int numeroInformado;

  printf("Informe o numero: ");
  scanf("%d", &numeroInformado);

  // Verifica se o número é divisível por 2
  parImpar() ? printf("O numero informado e par") :
               printf("O numero informado e impar");

  return 0;

}