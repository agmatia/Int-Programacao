#include <stdio.h>
#include <stdlib.h>

#define ZERO 0

float soma( float valor1, float valor2);
float sub(float valor1, float valor2);
float mult(float valor1, float valor2);
float divisao(float valor1, float valor2);
float pedirValor();

void main(){
   float operacao;
   float n1, n2;
   char op;

   printf("Digite a operacao: ");
   scanf("%c", &op);

   if(op=='a' || op=='A' || op=='+' || op=='s' || op=='S' || op=='-' || op=='m' || op=='M' || op=='*' || op=='d' || op=='D' || op=='/'){

   n1 = pedirValor(n1);
   n2 = pedirValor(n2);
   }

   system("cls");
   switch (op){
      case 'a':
      case 'A':
      case '+':
         operacao = soma(n1, n2);
         break;

      case 's':
      case 'S':
      case '-':
         operacao = sub(n1, n2);
         break;
      case 'm':
      case 'M':
      case '*':
         operacao = mult(n1, n2);
         break;

      case 'd':
      case 'D':
      case '/':
         operacao = divisao(n1, n2);
      break;
      default:
         exit(0);
   }
   printf("O resultado da operacao e: %.3f", operacao);
}

float soma( float valor1, float valor2){
float res;

   res = valor1 + valor2;

   return res;

}

float sub(float valor1, float valor2){
float res, maior, menor;

   if(valor1 < valor2){
            maior = valor2;
            menor = valor1;

         }else if(valor1 > valor2){
            maior = valor1;
            menor = valor2;
         }else{
         printf("Operacao invalida.");
         exit(0);
      }
res = maior - menor;
return res;
}

float mult(float valor1, float valor2){
float res;

res = valor1 * valor2;

return res;
}

float divisao(float valor1, float valor2){
float res;

   if(valor2 != ZERO){
         res = (valor1 / valor2);
      }else{
         printf("Nao e possivel dividir por zero");
         exit(0);
      }

return res;
}

float pedirValor(){
float valor;

   printf("Digite o valor: ");
   scanf("%f", &valor);

return valor;
}



