//Amanda

#include <stdio.h>
#include <locale.h>

void main(){
   int num;
   setlocale(LC_ALL, "PORTUGUESE");

   printf("Digite o n�mero: ");
   scanf("%d", &num);

   if(num == 0){
      printf("O n�mero � ZERO! \n");

   }else if(num > 0){
      printf("O n�mero � POSITIVO! \n");

   }else{
      printf("O n�mero � NEGATIVO! \n");
   }

}


