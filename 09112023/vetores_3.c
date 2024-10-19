#include <stdlib.h>
#include <stdio.h>

#define TAM 3

void main(){
int vetorA [30], vetorB [30];
int i;

   for(i=0; i < TAM; i++){
      printf("%d) Digite um valor: ", i);
      scanf("%d", &vetorA[i]);
   }
   for(i=0; i < TAM; i++){
      if(i%2 == 0){
         vetorB[i] = vetorA[i] * 2;
      }else{
         vetorB[i] = vetorA[i] * 3;
      }
   }
   system("cls");
   for(i = 0; i < TAM;i++){
      printf("vetor[%d] = %d \n", i, vetorB[i]);
   }
}
