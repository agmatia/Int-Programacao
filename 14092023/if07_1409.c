#include <stdio.h>
#include <locale.h>

#define AUM 0.03
#define REF 2000

void main(){
   float salario, aumento;
   setlocale(LC_ALL, "PORTUGUESE");

   printf("Digite o seu sal�rio: ");
   scanf("%f", &salario);

   if(salario <= REF){

      aumento = (salario + (salario*AUM));

      printf("Voc� pode receber o aumento. \n");
      printf("Seu novo sal�rio �: R$%.2f \n", aumento);

   } else{
      printf("\nVoc� n�o pode receber o aumento.");
   }
}



