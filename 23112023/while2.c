#include <stdio.h>

void main(){
   int num, cont, i = 0;
   float media, soma = 0.0
   printf("Digite quantos numeros pretende informar: ");
   scanf("%d", &cont);

   printf("---------------------\n");
   while(i < cont){
      printf("Digite um numero: ");
      scanf("%d", &num);

      soma += num;
      i++;
   }
   media = soma / cont;
   printf("---------------------\n");
   printf("A media e: %.2f", media);
}
