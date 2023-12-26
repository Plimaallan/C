#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int somar_dois_numeros(int x, int y) {

  int resultado = x * y;
  printf("O produto de %d multiplicado por %d é: %d \n", x, y, resultado);

  return 0;

}

int main() {

  somar_dois_numeros(10, 20);
  somar_dois_numeros(20, 30);
  somar_dois_numeros(50, 2);

  return 0;

}