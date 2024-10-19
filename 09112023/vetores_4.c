#include <stdio.h>
#include <stdlib.h>

#define PESSOAS 5
#define IDADE 18

void main(){
int idades[12], i, cont = 0, menor, j, indice = 0;

   for(i = 0; i < PESSOAS; i++){
      printf("%d) Digite a idade: ", i);
      scanf("%d", &idades[i]);

      if(idades[i] >= IDADE){
         cont++;
      }
   }
   printf("Quantidade maioridades: %d \n", cont);
   printf("Idades: \n");

   for(i = 0; i < PESSOAS; i++){
      menor = idades[i];
      for(j = i+1; j < PESSOAS; j++){
         if(idades[j] <= menor){
            indice = menor;
            menor = idades[j];
            idades[j] = indice;
         }
      }
      printf("%d \n", menor);
   }
}
