#include <stdio.h>

#define MAIOR 0.12
#define ENTRE 0.095
#define OUTRO 0.07

void main (){
    char vendedor1 [20], vendedor2[20], vendedor3[20];
    float comissao1, vendas1;
    float comissao2, vendas2;
    float comissao3, vendas3;
    float vFinal;

    printf("Identifique os vendedores: \n");
    scanf("%s %s %s", &vendedor1, &vendedor2, &vendedor3);

    printf("\nInforme os valores individuais em vendas: \n");
    scanf("%f %f %f", &vendas1, &vendas2, &vendas3);

    if((vendedor1, "vend1") == 0){

       }else if(vendas1 > 50000){
            comissao1 = (vendas1*MAIOR);

       }else if(vendas1 >= 30000 && vendas1 <= 50000){
            comissao1 = (vendas1*ENTRE);

       }else{
        comissao1 = (vendas1*ENTRE);
       }

    if((vendedor2, "vend2") == 0){

       }else if(vendas2 > 50000){
            comissao2 = (vendas2*MAIOR);

       }else if(vendas2 >= 30000 && vendas2 <= 50000){
            comissao2 = (vendas2*ENTRE);

       }else{
        comissao2 = (vendas2*ENTRE);
       }

    if((vendedor3, "vend3") == 0){

       }else if(vendas3 > 50000){
            comissao3 = (vendas3*MAIOR);

       }else if(vendas3 >= 30000 && vendas3 <= 50000){
            comissao3 = (vendas3*ENTRE);

       }else{
        comissao3 = (vendas3*ENTRE);
       }

    vFinal = (vendas1+vendas2+vendas3);

    printf("-------------------------------------------- \n");

    printf("Total em vendas: R$ %.2f \n", vFinal);

    printf("-------------------------------------------- \n");

    printf("Vendedor: %s \n", vendedor1);
    printf("comissao: R$%.2f \n", comissao1);
    printf("vendas: R$%.2f \n", vendas1);

    printf("-------------------------------------------- \n");

    printf("Vendedor: %s \n", vendedor2);
    printf("comissao: R$%.2f \n", comissao2);
    printf("vendas: R$%.2f \n", vendas2);

    printf("-------------------------------------------- \n");

    printf("Vendedor: %s \n", vendedor3);
    printf("comissao: R$%.2f \n", comissao3);
    printf("vendas: R$%.2f \n", vendas3);

}
