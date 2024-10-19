#include <stdio.h>

void main (){
   float deposito, taxaJuros, rendimento, vFinal;

   printf("Digite o valor do deposito \n");
      scanf("%f", &deposito);

   printf("Digite o valor da taxa de juros \n");
      scanf("%f", &taxaJuros);

   rendimento = (deposito * (taxaJuros/100));

   vFinal = (deposito + rendimento);

   printf("\n");

   printf("O valor do rendimento e: R$%.2f \n", rendimento);
   printf("O valor final e: R$%.2f \n", vFinal);


}
