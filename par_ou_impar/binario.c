#include <stdio.h>

int parImpar(int numeroInformado);

int main() {

  int numeroInformado;

  printf("Informe o numero: ");
  scanf("%d", &numeroInformado);

  // Verifica se o número é numero é 1 Par ou 0 Impar
  parImpar(numeroInformado) ? printf("O numero informado %d é par", numeroInformado) :
                              printf("O numero informado %d é impar", numeroInformado);

  return 0;

}

// Retorna true se numeroInformado for par e false se for impar
int parImpar(int numeroInformado) {

  // Se !(numeroInformado & 1) for 1 é par, se for 0 impar
  return (!(numeroInformado & 1));

}