#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

  int p = 0;
  int i = 0;

  int primos[50] = {0};
  int primo_indexes = 2;

  bool e_primo = false;

  primos[0] = 2;
  primos[1] = 3;

  for (p = 5; p <= 100; p = p + 2) {
    e_primo = true;

    for (i = 1; e_primo && p / primos[i] >= primos[i]; ++i) {
      if (p % primos[i] == 0) {
        e_primo = false;
      }
    }

    if (e_primo == true) {
      primos[primo_indexes] = p;
      ++primo_indexes;
    }

  }

  for (i = 0; i < primo_indexes; ++i) {
    printf("%i  ", primos[i]);
  }

  printf("\n");

  return 0;

}