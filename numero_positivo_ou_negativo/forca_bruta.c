#include <stdio.h>

int main() {

    int numeroPositivoNegativo = -10;
      
    // Condição verifica se o número é positivo/negativo/zero
    if (numeroPositivoNegativo > 0) {
         printf("O número é positivo");
    } else if (numeroPositivoNegativo < 0) {
        printf("O número é negativo");
    } else {
        printf("O número é zero");
    }
    
    return 0;

}
