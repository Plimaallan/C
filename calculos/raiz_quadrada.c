#include <stdio.h>
#include <stdlib.h>

float ValorAbsoluto(float valor);

int main() {

  printf("Valor absoluta de -2.20 é %.2f", ValorAbsoluto(-2.20));

  return 0;

}

float ValorAbsoluto(float valor) {

  if (valor < 0) {
    valor = -valor;
  }

  return valor;

}