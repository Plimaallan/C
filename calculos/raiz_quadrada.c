#include <stdio.h>
#include <stdlib.h>

float RaizQuadrada(float valor);
float ValorAbsoluto(float valor);
int MaximoDivisorComum(int valorX, int valorY);

int main() {

  float resultadoRaizQuadrada = 0;
  float resultadoValorAbsoluto = 0;
  int resultadoMaximoDivisorComum = 0;

  resultadoRaizQuadrada = RaizQuadrada(84);
  printf("Raiz quadrada é %.3f\n", resultadoRaizQuadrada);

  resultadoValorAbsoluto = ValorAbsoluto(-2.20);
  printf("Valor absoluta de -2.20 é %.2f\n", resultadoValorAbsoluto);

  resultadoMaximoDivisorComum = MaximoDivisorComum(10, 12);
  printf("MDC é %d", resultadoMaximoDivisorComum);

  return 0;

}


float RaizQuadrada(float valor) {

  const  float  precisao = .00001;
  float  palpite = 1.0;
  float resultado = 0.0;

  /* Se o resultado por negatino, retorna -1 */
  if (valor < 0) {
    printf("Valor informado para Raiz quadrada é negativo.\n");
    resultado = -1.0;
  } else {
    while (ValorAbsoluto(palpite * palpite - valor) >= precisao) {
      palpite = (valor / palpite + palpite) / 2.0;
    }
    resultado = palpite;
  }

  return resultado;

}


float ValorAbsoluto(float valor) {

  /* Se o valor for menor que zero, remove o sinal de menos */
  if (valor < 0) {
    valor = -valor;
  }

  return valor;

}


int MaximoDivisorComum(int valorX, int valorY) {

  int valorTemp = 0;

  /* Loop - Divide até que 'valorY' seja igual a zero  */
  while (valorY != 0) {
    valorTemp = valorX % valorY;
    valorX = valorY;
    valorY = valorTemp;
  }

  return valorX;

}