#include <stdio.h>
#include <stdlib.h>

int main(){

    int dia, mes, tentar;
    
    do{

        printf("\n\n\n\n\t\tDescubra o seu signo dos cavaleiros do zodíacos");

        printf("\n\n\n\t\t\tInforme seu dia de nascimento: ");
        scanf("%d", &dia);

        printf("\n\t\t\tInforme seu mês de nascimento: ");
        scanf("%d", &mes);

        switch (mes) {

            case 12:
                printf("\n\t\t\tSeu signo é: %s", (dia >= 22) ? "Capricórnio" : "Sagitário");
                break;
            case 11:
                printf("\n\t\t\tSeu signo é: %s", (dia >= 23) ? "Sagitário" : "Escorpião");
                break;
            case 10:
                printf("\n\t\t\tSeu signo é: %s", (dia >= 23) ? "Escorpião" : "Libra");
                break;
            case 9:
                printf("\n\t\t\tSeu signo é: %s",  (dia >= 23) ? "Libra" : "Virgem");
                break;
            case 8:
                printf("\n\t\t\tSeu signo é: %s",  (dia >= 23) ? "Virgem" : "Leão");
                break;
            case 7:
                printf("\n\t\t\tSeu signo é: %s",  (dia >= 23) ? "Leão" : "Câncer");
                break;
            case 6:
                printf("\n\t\t\tSeu signo é: %s",  (dia >= 22) ? "Câncer" : "Gêmeos");
                break;
            case 5:
                printf("\n\t\t\tSeu signo é: %s",  (dia >= 22) ? "Gêmeos" : "Tauro");
                break;
            case 4:
                printf("\n\t\t\tSeu signo é: %s",  (dia >= 21) ? "Tauro" : "Áries");
                break;
            case 3:
                printf("\n\t\t\tSeu signo é: %s",  (dia >= 21) ? "Áries" : "Peixes");
                break;
            case 2:
                printf("\n\t\t\tSeu signo é: %s",  (dia >= 20) ? "Peixes" : "Aquário");
                break;
            case 1:
                printf("\n\t\t\tSeu signo é: %s",  (dia >= 21) ? "Aquário" : "Capricórnio");
                break;
            default:
                printf("\n\t\t\t\tValor inválido!!!");
                break;

        }

        printf("\n\n\t\tAperte 1 para tentar novamente ou 2 para sair: ");
        scanf("%d", &tentar);

        if (tentar == 1) {
            system("cls");
        }

    } while(tentar == 1);

    return 0;

}