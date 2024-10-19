#include <stdio.h>
#include <locale.h>

void main(){
   int num1, num2;
   setlocale(LC_ALL, "PORTUGUESE");

      printf("Digite a o 1° número: ");
         scanf("%d", &num1);

      printf("Digite a o 2° número: ");
         scanf("%d", &num2);

      if(num1 == num2){
         printf("Os números são iguais");

      } else{
         printf("Os números são diferentes!");
      }

      printf("\n");
      printf("1° valor: %d \n", num1);
      printf("2° valor: %d \n", num2);
}
