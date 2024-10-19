//Amanda

#include <stdio.h>

void main(){
   int cod;
   float valor;

   printf("Digite o codigo do produto: ");
   scanf("%d", &cod);

   printf("Digite o valor do produto: ");
   scanf("%f", &valor);

   switch(cod){
      case 1:
         printf("Produto: %d - regiao SUL \n", cod);
         break;
      case 2:
         printf("Produto: %d - regiao NORTE \n", cod);
         break;
      case 3:
         printf("Produto: %d - regiao LESTE \n", cod);
         break;
      case 4:
         printf("Produto %d - regiao OESTE \n", cod);
         break;
      case 5:
      case 6:
         printf("Produto %d - regiao NORDESTE \n", cod);
         break;
   default:
         printf("Produto IMPORTADO \n");
   }
   printf("Preco: R$%.2f", valor);
}
