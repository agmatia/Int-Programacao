//Amanda

#include <stdio.h>
#include <locale.h>

void main(){
   float a, b, c, soma;
   setlocale(LC_ALL, "PORTUGUESE");

   printf("Digite o 1° número (A): ");
   scanf("%f", &a);

   printf("Digite o 2° número (B): ");
   scanf("%f", &b);

   printf("Digite o 3° número (C): ");
   scanf("%f", &c);

   printf("\n");

   soma = a + b;
   printf("A+B = %.2f \n", soma);

   if(soma == c){
      printf("A soma 'A+B' é igual a %.2f \n", c);

   }else if(soma < c){
      printf("A soma 'A+B' é menor que %.2f \n", c);

   }else{
      printf("A soma 'A+B' é maior que %.2f! \n", c);
   }
}


