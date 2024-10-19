#include <stdio.h>
#include <stdlib.h>

#define DADOS 30
#define TESTE 29 //o indice começa em 0,então o ultimo dos 30 elementos estará no indice 29

void main(){
int num[30], i, ultimo[30];

   for(i = 0; i < DADOS; i++){
      printf("%d) Digite um numero: ", i);
      scanf("%d", &num[i]);
   }
   system("cls");
   printf("Numeros invertidos: \n");

   for(i = 0; i < DADOS; i++){
      ultimo[i] = num[TESTE - i];
      printf("%d \n", ultimo[i]);
   }
}
