#include<stdio.h>

#define OURO 3
#define PRATA 2
#define BRONZE 1

void main(){
    char pais1[50], pais2[50], pais3[50];
    int cod1, cod2, cod3;
    int o1, o2, o3;
    int p1, p2, p3;
    int b1, b2, b3;
    int pontuacao1, pontuacao2, pontuacao3;

    printf("Entre com o nome dos tres paises: ");
    scanf("%s %s %s", &pais1, &pais2, &pais3);

    printf("Entre com a qtde de medalhas de ouro para os tres paises: ");
    scanf("%d %d %d", &o1, &o2, &o3);

    printf("Entre com a qtde de medalhas de prata para os tres paises: ");
    scanf("%d %d %d", &p1, &p2, &p3);

    printf("Entre com a qtde de medalhas de bronze para os tres paises: ");
    scanf("%d %d %d", &b1, &b2, &b3);

    pontuacao1 = (o1 * OURO) + (p1 * PRATA) + (b1 * BRONZE);
    pontuacao2 = (o2 * OURO) + (p2 * PRATA) + (b2 * BRONZE);
    pontuacao3 = (o3 * OURO) + (p3 * PRATA) + (b3 * BRONZE);

    printf("O pais %s teve %d pontuacao\n", pais1, pontuacao1);
    printf("O pais %s teve %d pontuacao\n", pais2, pontuacao2);
    printf("O pais %s teve %d pontuacao\n", pais3, pontuacao3);

    if(pontuacao1 > pontuacao2){
        if(pontuacao1 > pontuacao3){
            printf("Primeiro: %s", pais1);

            if(pontuacao2 > pontuacao3){
                printf("Segundo: %s", pais2);
                printf("Terceiro: %s", pais3);
            }else{
                printf("Segundo: %s", pais3);
                printf("Terceiro: %s", pais2);
            }
        }
    }else if(pontuacao2 > pontuacao3){
        if(pontuacao2 > pontuacao1){
            printf("\nPrimeiro: %s", pais2);

            if(pontuacao1 > pontuacao3){
                printf("\nSegundo: %s", pais1);
                printf("\nTerceiro: %s", pais3);
            }else{
                printf("\nSegundo: %s", pais3);
                printf("\nTerceiro: %s", pais1);
            }
        }
    }else{
        printf("\nPrimeiro: %s", pais3);

            if(pontuacao1 > pontuacao2){
                printf("\nSegundo: %s", pais1);
                printf("\nTerceiro: %s", pais2);
            }else{
                printf("\nSegundo: %s", pais2);
                printf("\nTerceiro: %s", pais1);
            }
    }
}



