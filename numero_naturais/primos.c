#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

  int primo_valor = 0;
  int primos[50] = {[0] = 2, [1] = 3};
  int primo_indexes = 2;
  bool e_primo = false;

  for (primo_valor = 5; primo_valor <= 100; primo_valor = primo_valor + 2) {
    e_primo = true;

    for (int i = 1; e_primo && primo_valor / primos[i] >= primos[i]; ++i) {
      if (primo_valor % primos[i] == 0) {
        e_primo = false;
      }
    }

    if (e_primo == true) {
      primos[primo_indexes] = primo_valor;
      ++primo_indexes;
    }

  }

  for (int i = 0; i < primo_indexes; ++i) {
    printf("%i  ", primos[i]);
  }

  printf("\n");

  return 0;

}