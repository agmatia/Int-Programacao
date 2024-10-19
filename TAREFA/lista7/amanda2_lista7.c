//Amanda

#include <stdio.h>
#include <stdlib.h>

#define ZERO 0

void main(){
   float operacao, maior, menor;
   float n1, n2;
   char op;

   printf("Digite a operacao: ");
   scanf("%c", &op);

   if(op=='a' || op=='A' || op=='+' || op=='s' || op=='S' || op=='-' || op=='m' || op=='M' || op=='*'  || op=='d' || op=='D' || op=='/'){

      printf("Digite o primeiro numero: ");
      scanf("%f", &n1);

      printf("Digite o segundo numero: ");
      scanf("%f", &n2);

      }if(n1 < n2){
         maior = n2;
         menor = n1;

      }else if(n1 > n2){
         maior = n1;
         menor = n2;

   }else{
      printf("Operacao invalida.");
   }

   system("cls");
   switch (op){
      case 'a':
      case 'A':
      case '+':
         operacao = (n1 + n2);
         break;

      case 's':
      case 'S':
      case '-':
         operacao = (maior - menor);
         break;

      case 'm':
      case 'M':
      case '*':
         operacao = (n1 * n2);
         break;

      case 'd':
      case 'D':
      case '/':
         if(n2!=ZERO){
            operacao = (n1/n2);
         }else{
            printf("Nao e possivel dividir por zero");
            exit(0);
         }
      break;
      default:
         exit(0);
   }
   printf("O resultado da operacao e: %.3f", operacao);
}
