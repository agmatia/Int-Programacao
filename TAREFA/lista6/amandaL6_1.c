//Amanda

#include <stdio.h>

#define MENOS 0.02
#define ENTRE 0.025
#define ACIMA 0.003

void main(){
   float vendas, comissao, cMes;

   printf("Digite o valor de vendas: ");
   scanf("%f", &vendas);

   if(vendas > 0 && vendas < 100){
      comissao = MENOS;

   }else if(vendas >= 100 && vendas <= 200){
      comissao = ENTRE;

   }else if(vendas > 200){
      comissao = ACIMA;

   }else{
      printf("Valor invalido \n");
   }
   cMes = 1000*(comissao*vendas);

   printf("O valor da comissao a receber e: R$ %.2f", cMes);
}



