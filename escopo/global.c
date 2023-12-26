#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int variavel_global = 10;

int FuncaoVariavel() {

  variavel_global = variavel_global * 2;
  int variavel_funcao = 30;

  // podemos acessar "variavel_funcao" e "variavel_global", mas não podemos acessar "variavel_local"
  printf("Variavel função %d\nvariavel global %d\n", variavel_funcao, variavel_global);

  return 0;

}

int main() {

  variavel_global = variavel_global * 4;
  int varivavel_local = 20;

  // podemos acessar "variavel_local" e "variavel_global", mas não podemos acessar "variavel_funcao"
  printf("Variavel local %d\nvariavel global %d\n", varivavel_local, variavel_global);
  FuncaoVariavel();

  return 0;

}