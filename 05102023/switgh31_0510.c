#include <stdio.h>

void main(){
   float operacao;
   float num1, num2;
   char op;

   printf("Digite o primeiro numero: ");
   scanf("%f", &num1);

   printf("Digite o segundo numero: ");
   scanf("%f", &num2);

   fflush(stdin);                      //recebe o "enter" entre um comando e outro (buffer)
   printf("Digite a operacao: ");
   scanf("%c", &op);

   switch (op){
      case 'a':
      case 'A':
      case '+':
         operacao = (num1 + num2);
         printf("%.3f + %.3f = %.3f", num1, num2, operacao);
         break;

      case 's':
      case 'S':
      case '-':
         operacao = (num1 - num2);
         printf("%.3f - %.3f = %.3f", num1, num2, operacao);
         break;

      case 'm':
      case 'M':
      case '*':
         operacao = (num1 * num2);
         printf("%.3f * %.3f = %.3f", num1, num2, operacao);
         break;

      case 'd':
      case 'D':
      case '/':
         operacao = (num1/num2);
         printf("%.3f / %.3f = %.3f", num1, num2, operacao);
         break;
      default:
         printf("operacao invalida.");
   }
}
