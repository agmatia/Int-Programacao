//Amanda

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
   int cod;
   float valor;
   setlocale(LC_ALL, "PORTUGUESE");

   printf("Digite o codigo do produto: ");
   scanf("%d", &cod);

   printf("Digite o valor do produto: ");
   scanf("%f", &valor);

   system("cls");
   switch(cod){
      case 1:
         printf("Produto: %d - regi�o SUL \n", cod);
         break;
      case 2:
         printf("Produto: %d - regi�o NORTE \n", cod);
         break;
      case 3:
         printf("Produto: %d - regi�o LESTE \n", cod);
         break;
      case 4:
         printf("Produto %d - regi�o OESTE \n", cod);
         break;
      case 5:
      case 6:
         printf("Produto %d - regi�o NORDESTE \n", cod);
         break;
      case 7:
      case 8:
      case 9:
        printf("Produto %d - regi�o SUDESTE \n", cod);
        break;
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
        printf("Produto %d - regi�o CENTRO-OESTE \n", cod);
        break;
   default:
         printf("Produto IMPORTADO \n");
   }
   printf("Pre�o: R$%.2f", valor);
}
