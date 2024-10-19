//Amanda

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    int ano, mes, dias;
    setlocale(LC_ALL, "portuguese");

    printf("Digite o valor numérico do mês: ");
    scanf("%d", &mes);

    system("cls");
    switch(mes){
        case 1:
            printf("Mês: Janeiro \n");
            break;
        case 2:
            printf("Informe o ano: ");
            scanf("%d", &ano);

            printf("Mês: Fevereiro \n");

            if(ano%4 == 0 && ano%100 != 0){
                dias = 29;
                printf("Dias: %d", dias);

            }else{
                dias = 28;
                printf("Dias: %d", dias);
            }
            exit(0);
            break;
        case 3:
            printf("Mês: Março \n");
            break;
        case 4:
            printf("Mês: Abril \n");
            break;
        case 5:
            printf("Mês: Maio \n");
            break;
        case 6:
            printf("Mês: Junho \n");
            break;
        case 7:
            printf("Mês: Julho \n");
            break;
        case 8:
            printf("Mês: Agosto \n");
            break;
        case 9:
            printf("Mês: Setembro \n");
            break;
        case 10:
            printf("Mês: Outubro \n");
            break;
        case 11:
            printf("Mês: Novembro \n");
            break;
        case 12:
            printf("Mês: Dezembro \n");
            break;
        default:
            printf("Mês inexistente");
            exit(0);
    }
    if(mes==1 || mes==3 || mes==5 || mes==7 ||  mes==8 || mes==10 || mes==12){
        dias = 31;
        printf("Dias: %d", dias);

    }else if(mes==4 || mes==6 || mes==9 || mes==11){
        dias = 30;
        printf("Dias: %d", dias);

    }else{
        exit(0);
    }
}
