#include <stdio.h>

void main(){
   int valor;
   int cont = 0;
   float soma = 0;
   float media;

   printf("Digite um valor: ");
   scanf("%d", &valor);

   while(valor != 0){
      soma += valor;
      cont++;

   printf("Digite um valor: ");
   scanf("%d", &valor);

   }
   media = soma / cont;
   printf("A quantidade de valores foi: %d\n", cont);
   printf("A media dos valores foi %.2f \n", media);
}
