#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main() {
    int dia, mes;
    char tentar;

    do {
        printf("\n\n\n\n\t\t\tDescubra o seu Signo do Zod\xA1i\baco");
        printf("\n\n\n\t\t\tInforme seu dia de nascimento: ");
        scanf("%d", &dia);
        printf("\n\t\t\tInforme seu m\x88s de nascimento: ");
        scanf("%d", &mes);

        switch (mes) {
            case 12:
                printf("\n\t\t\tSeu signo \x82: %s", (dia >= 22) ? "Capric\xa2rnio" : "Sagit\xa0rio");
                break;
            case 11:
                printf("\n\t\t\tSeu signo \x82: %s", (dia >= 23) ? "Sagit\xa0rio" : "Escorpi\xc6o");
                break;
            case 10:
                printf("\n\t\t\tSeu signo \x82: %s", (dia >= 23) ? "Escorpi\xc6o" : "Libra");
                break;
            case 9:
                printf("\n\t\t\tSeu signo \x82: %s",  (dia >= 23) ? "Libra" : "Virgem");
                break;
            case 8:
                printf("\n\t\t\tSeu signo \x82: %s",  (dia >= 23) ? "Virgem" : "Le\xc6o");
                break;
            case 7:
                printf("\n\t\t\tSeu signo \x82: %s",  (dia >= 23) ? "Le\xc6o" : "C\xE2ncer");
                break;
            case 6:
                printf("\n\t\t\tSeu signo \x82: %s",  (dia >= 22) ? "C\xE2ncer" : "G\x88meos");
                break;
            case 5:
                printf("\n\t\t\tSeu signo \x82: %s",  (dia >= 22) ? "G\x88meos" : "Tauro");
                break;
            case 4:
                printf("\n\t\t\tSeu signo \x82: %s",  (dia >= 21) ? "Tauro" : "\xb5ries");
                break;
            case 3:
                printf("\n\t\t\tSeu signo \x82: %s",  (dia >= 21) ? "\xb5ries" : "Peixes");
                break;
            case 2:
                printf("\n\t\t\tSeu signo \x82: %s",  (dia >= 20) ? "Peixes" : "Aqu\xa0rio");
                break;
            case 1:
                printf("\n\t\t\tSeu signo \x82: %s",  (dia >= 21) ? "Aqu\xa0rio" : "Capric\xa2rnio");
                break;
            default:
                printf("\n\t\t\t\tValor inv\xa0lido!!!");
                break;
        }

        printf("\n\n\t\tPressione qualquer tecla para continuar ou 'S' para sair");
        tentar = toupper(getch());

        if (tentar != 'S') {
            system("cls");
        }

    } while (tentar != 'S');
    printf("\n");
    return 0;
}