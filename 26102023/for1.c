#include <stdio.h>
#include <locale.h>

void main(){
   int cont, num;
   setlocale(LC_ALL, "PORTUGUESE");

   printf("Digite o número limite: ");
   scanf("%d", &num);

   system("cls");
   for(cont = num; cont > 0; cont--){
      printf("Número %d", cont);
      printf("\n");
   }
}
