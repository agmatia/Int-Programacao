#include <stdio.h>
#include <stdlib.h>

#define PESSOAS 3

void main (){
float salario[PESSOAS];
float media, soma = 0.0;
int i;

   for(i = 0; i < PESSOAS; i++){
      printf("%d) Digite o salario: ", i+1);
      scanf("%f", &salario[i]);

      soma += salario[i];

   }
   media = soma/PESSOAS;

   for(i = 0; i< PESSOAS; i++){
      if(salario[i] > media){
         printf("R$%.2f \n", salario[i]);
      }
   }
   printf("A media salarial e: R$%.2f", media);
}


