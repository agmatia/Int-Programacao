#include <stdlib.h>
#include <locale.h>

void main(){
int num1, num2, cont;
char op;
setlocale(LC_ALL, "PORTUGUESE");

   printf("Escolha uma op��o: \n");
   printf("a)par \n");
   printf("b)impar \n");
   scanf("%c", &op);

   printf("Digite os n�meros inicial e final: ");
   scanf("%d %d", &num1, &num2);

   printf("\n");
   switch(op){
   case 'a':
   for(cont = num1; cont <= num2; cont++){
      if(cont%2 == 1){
         printf("%d", cont);
         printf("\n");
      }
   }
   break;
   case 'b':
   for(cont = num1; cont <= num2; cont++){
      if(cont%2 == 1){
         printf("%d", cont);
         printf("\n");
      }
   }
   break;
   default:
      printf("Opera��o invalida");
      exit(0);
   }
}
