// Amanda Matia

#include <stdio.h>

#define DIV 4

void main(){
   float n1, n2, n3, n4;
   float media;

   printf("Digite o primeiro numero \n");
      scanf("%f", &n1);

    printf("Digite o segundo numero \n");
      scanf("%f", &n2);

    printf("Digite o terceiro numero \n");
      scanf("%f", &n3);

    printf("Digite o quarto numero \n");
      scanf("%f", &n4);

   media = (n1 + n2 + n3 + n4)/DIV;

   printf("A media dos valores e: %.2f ", media);

}
