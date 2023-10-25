#include <stdio.h>

int main() {

	int numeroPositivoNegativo = 0;

	// Condição verifica se o número é positivo/negativo/zero
	if (numeroPositivoNegativo >= 0) {
		if (numeroPositivoNegativo == 0) {
			printf("O número é zero");
		} else {
			printf("O número é positivo");
		}
	} else {
		printf("O número é negativo");
	}

	return 0;

}