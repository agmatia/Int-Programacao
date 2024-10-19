#include <stdlib.h>
#include <locale.h>

void main(){
   int n1, n2, maior, cont;
   setlocale(LC_ALL, "PORTUGUESE");

   printf("Digite o 1° e o 2° número: ");
   scanf("%d %d", &n1, &n2);

   system("cls");
   if(n1 > n2){
      maior = n1;
   }else if(n2 > n1){
      maior = n2;
   }else{
      printf("Os números são iguais.");
      exit(0);
   }

   for(cont = 0; cont <= maior; cont++){
      printf("%d", cont);
      printf("\n");
   }
}
