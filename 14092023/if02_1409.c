#include <stdio.h>
#include <locale.h>

void main(){
   int num1, num2;
   setlocale(LC_ALL, "PORTUGUESE");

      printf("Digite a o 1� n�mero: ");
         scanf("%d", &num1);

      printf("Digite a o 2� n�mero: ");
         scanf("%d", &num2);

      if(num1 == num2){
         printf("Os n�meros s�o iguais");

      } else{
         printf("Os n�meros s�o diferentes!");
      }

      printf("\n");
      printf("1� valor: %d \n", num1);
      printf("2� valor: %d \n", num2);
}
