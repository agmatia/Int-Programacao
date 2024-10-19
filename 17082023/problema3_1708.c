#include <stdio.h>
#define ADC 0.25

void main(){
   float salario, novo_sal;

   printf("Digite o valor do seu salario: \n");
      scanf("%f", &salario);

   novo_sal = ((salario*ADC) + salario);

   printf("Seu novo salario e: R$%.2f ", novo_sal);

}
