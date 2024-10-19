//Amanda

#include <stdio.h>
#include <locale.h>

void main(){
   float num1, num2;
   setlocale(LC_ALL, "PORTUGUESE");

   printf("Digite o 1° número: ");
   scanf("%f", &num1);

   printf("Digite o 2° número: ");
   scanf("%f", &num2);

   printf("\n");

   if(num1 > num2){
      printf("O 1° número é maior! \n");

   }else{
      printf("O 2° número é maior! \n");
   }

}

