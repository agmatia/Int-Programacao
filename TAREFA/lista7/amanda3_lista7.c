//Amanda

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void anoBissexto(int num);
void parOuImpar(int num);
void postivoNegativoOuZero(int num);


void main(){
    int num1;
    char opcao;
    setlocale(LC_ALL, "PORTUGUESE");

    printf("Opções disponíveis: \n");
    printf("A - Número Par ou Ímpar \n");
    printf("B - Número Positivo, negativo ou nulo \n");
    printf("C - Teste para ano bissexto \n");

    printf("----------------------------- \n");
    printf("Digite sua escolha: ");
    scanf("%c", &opcao);
    fflush(stdin);

    printf("----------------------------- \n");
    printf("Digite o valor: ");
    scanf("%d", &num1);

    system("cls");
    switch(opcao){
        case 'A':
        case 'a':
            parOuImpar(num1);
            break;
        case 'B':
        case 'b':
            postivoNegativoOuZero(num1);
            break;
        case 'C':
        case 'c':
            anoBissexto(num1);
            break;
        default:
            printf("Operação inválida");
    }
}

void parOuImpar(int num){
    if(num%2 == 0){
        printf("O número é PAR", num);
    }else{
        printf("O número é ÍMPAR", num);
    }
}

void postivoNegativoOuZero(int num){
    if(num > 0){
        printf("O número %d é POSITIVO", num);
    }else if(num == 0){
        printf("ZERO");
    }else{
        printf("O número %d é NEGATIVO", num);
    }
}

void anoBissexto(int num){
    if(num%400 == 0 || (num%4 == 0 && num%100 != 0)){
        printf("O ano %d é um ano BISSEXTO", num);
    }else {
        printf("O ano %d NÃO é bissexto", num);
    }
}
