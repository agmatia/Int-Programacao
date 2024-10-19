#include <stdio.h>

#define VALOR 60.00

void main(){
   float diaria, taxa;
   float vFinal;

   printf("Digite a quantidade de diarias: ");
   scanf("%f", &diaria);

   if(diaria > 0 && diaria <= 5){
      taxa = (8.00) * diaria;

   }else if(diaria > 5 && diaria <= 15){
      taxa = (6.50) * diaria;

   }else if(diaria > 15){
      taxa = (5.50) * diaria;

   }else{
      printf("Valor final: R$0.00");
   }

   vFinal = taxa + (VALOR*diaria);
   printf("Valor final: R$%.2f \n", vFinal);
}
