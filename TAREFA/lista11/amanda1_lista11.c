#include <stdlib.h>
#include <stdio.h>

#define TAM 12

void main(){
int vetorA [12];
int i;

   for(i=0; i < TAM; i++){
      printf("%d) Digite um valor: ", i);
      scanf("%d", &vetorA[i]);
   }
   //system("cls");
   printf("Pares: \n");
   for(i=0; i < TAM; i++){
      if(vetorA[i]%2 == 0){
         printf(" %d \n", vetorA[i]);
      }
   }
}
