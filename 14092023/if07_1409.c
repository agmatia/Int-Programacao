#include <stdio.h>
#include <locale.h>

#define AUM 0.03
#define REF 2000

void main(){
   float salario, aumento;
   setlocale(LC_ALL, "PORTUGUESE");

   printf("Digite o seu salário: ");
   scanf("%f", &salario);

   if(salario <= REF){

      aumento = (salario + (salario*AUM));

      printf("Você pode receber o aumento. \n");
      printf("Seu novo salário é: R$%.2f \n", aumento);

   } else{
      printf("\nVocê não pode receber o aumento.");
   }
}



