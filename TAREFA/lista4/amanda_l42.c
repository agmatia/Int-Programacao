//Amanda

#include <stdio.h>
#include <locale.h>

void main(){
   int num;
   setlocale(LC_ALL, "PORTUGUESE");

   printf("Digite o número: ");
   scanf("%d", &num);

   if(num == 0){
      printf("O número é ZERO! \n");

   }else if(num > 0){
      printf("O número é POSITIVO! \n");

   }else{
      printf("O número é NEGATIVO! \n");
   }

}


