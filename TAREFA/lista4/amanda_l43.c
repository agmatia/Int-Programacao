//Amanda

#include <stdio.h>
#include <locale.h>

void main(){
   float a, b, c, soma;
   setlocale(LC_ALL, "PORTUGUESE");

   printf("Digite o 1� n�mero (A): ");
   scanf("%f", &a);

   printf("Digite o 2� n�mero (B): ");
   scanf("%f", &b);

   printf("Digite o 3� n�mero (C): ");
   scanf("%f", &c);

   printf("\n");

   soma = a + b;
   printf("A+B = %.2f \n", soma);

   if(soma == c){
      printf("A soma 'A+B' � igual a %.2f \n", c);

   }else if(soma < c){
      printf("A soma 'A+B' � menor que %.2f \n", c);

   }else{
      printf("A soma 'A+B' � maior que %.2f! \n", c);
   }
}


