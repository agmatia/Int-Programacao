//Amanda

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
float peso, pesoEq, gravRel;
int cod;
setlocale(LC_ALL, "PORTUGUESE");

    printf("Informe o código correspondente ao planeta: ");
    scanf("%d", &cod);

    if(cod==1 || cod==2 || cod==3 || cod==4 || cod==5 || cod==6){
        printf("Digite o valor do peso: ");
        scanf("%f", &peso);
    }else{
        printf("Planeta não identificado.");
        exit(0);
    }
    system("cls");
    switch(cod){
        case 1:
            printf("Planeta: Mercúrio \n");
            gravRel = 0.37;
            break;
        case 2:
            printf("Planeta: Vênus \n");
            gravRel = 0.88;
            break;
        case 3:
            printf("Planeta: Marte \n");
            gravRel = 0.38;
            break;
        case 4:
            printf("Planeta: Júpiter \n");
            gravRel = 2.64;
            break;
        case 5:
            printf("Planeta: Saturno \n");
            gravRel = 1.15;
            break;
        case 6:
            printf("Planeta: Urano \n");
            gravRel = 1.17;
            break;
        default:
            exit(0);
    }
    pesoEq = (peso*gravRel);

    printf("Peso informado: %.3fKg \n", peso);
    printf("Peso equivalente no planeta: %.3fKg \n", pesoEq);
}
