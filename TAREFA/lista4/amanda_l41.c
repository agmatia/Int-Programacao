//Amanda

#include <stdio.h>
#include <locale.h>

void main(){
   float num1, num2;
   setlocale(LC_ALL, "PORTUGUESE");

   printf("Digite o 1� n�mero: ");
   scanf("%f", &num1);

   printf("Digite o 2� n�mero: ");
   scanf("%f", &num2);

   printf("\n");

   if(num1 > num2){
      printf("O 1� n�mero � maior! \n");

   }else{
      printf("O 2� n�mero � maior! \n");
   }

}

