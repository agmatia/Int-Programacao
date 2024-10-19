/* Amanda Matia

Este programa serve para calcular a
soma entre quatro numeros.

*/
#include <stdio.h>
void main(){

   int n1,n2,n3,n4;   // Declaracao de variaveis
   int soma;   // declaracao da operacao

   printf("Digite o primeiro numero ");
   scanf("%d", &n1);

   printf("Digite o segundo numero ");
   scanf("%d", &n2);

   printf("Digite o terceiro numero ");
   scanf("%d", &n3);

   printf("Digite o quarto numero ");
   scanf("%d", &n4);

   soma = (n1+n2+n3+n4);   // Calculo da soma

   printf("A soma e: %d", soma);   // Mostrando o resultado

}
