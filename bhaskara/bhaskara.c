#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>

/*
 * Autor: Allan Lima
 * Data : 23/10/2023
 * A fórmula de Bhaskara é um método resolutivo para equações do segundo grau 
 * cujo nome homenageia o grande matemático indiano que a demonstrou. 
 * Essa fórmula nada mais é do que um método para encontrar as raízes reais de 
 * uma equação do segundo grau fazendo uso apenas de seus coeficientes.
 * 
 * Fórmula de bhaskara
 * x = -b ± √b² - 4.a.c
 * --------------------
 *        2.a
 */

int main() {

  char valorABC[3] = {'A', 'B', 'C'}, tentar;
  double raiz1, raiz2, delta, valorRaiz[3] = {0};

  do {

    printf("\n FÓRMULA DE BHASKARA\n\n");

    for (int i = 0; i < 3; i++) {

      printf(" Digite o valor de %c: ", valorABC[i]);

      if (scanf("%lf", &valorRaiz[i]) != 1) {
        printf(" Valor de %c \x82 inv\xa0lido!", valorABC[i]);
        return 1;
      }

    }

    if (valorRaiz[0] != 0) {

      delta = pow(valorRaiz[1], 2) - (4 * valorRaiz[0] * valorRaiz[2]);

      if (delta < 0) {
        printf(" N\xc6o tem ra\xA1zes reais \n");
      } else if (delta == 0) {
        raiz1 = (-valorRaiz[1]) / pow(valorRaiz[0], 2);
        printf(" Possui apenas uma raiz real %.2lf \n", raiz1);
      } else {
        raiz1 = (-valorRaiz[1] + sqrt(delta)) / pow(2, valorRaiz[0]);
        raiz2 = (-valorRaiz[1] - sqrt(delta)) / pow(2, valorRaiz[0]);
        printf(" Delta : %.0lf \n", delta);
        printf(" Raiz 1: %.2lf \n", raiz1);
        printf(" Raiz 2: %.2lf \n", raiz2);
      }

    } else {
      printf(" N\xc6o \x82 uma equa\x87\xc6o do segundo grau \n");
    }

    printf("\n\t\tPressione qualquer tecla para continuar ou 'S' para sair ");
    tentar = toupper(getch());

    if (tentar != 'S') {
      system("cls");
    }

  } while (tentar != 'S');

  printf("\n");

  return 0; 

}