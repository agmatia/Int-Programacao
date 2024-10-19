#include <stdio.h>
#include <stdlib.h>

#define TAM 4

void main(){
int notas[TAM];
int i, soma = 0;
float media;

   for(i = 0; i < TAM; i++){
      printf("%d - Entre com a nota: ", i+1);
      scanf("%d", &notas[i]);

      soma += notas[i];
   }
   media = (float)soma/TAM;                  //transformando int em float
   printf("A media e: %.2f", media);
}
