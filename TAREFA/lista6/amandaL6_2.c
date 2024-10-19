//Amanda

#include <stdio.h>

void main(){
   int idade, classe;

   printf("Digite sua idade: ");
   scanf("%d", &idade);

   if(idade >= 16 && idade < 18 || idade > 65){
      printf("Voto facultativo");

   }else if(idade >= 18 && idade <= 65){
      printf("Voto obrigatorio");

   }else{
      printf("Nao votante");
   }
}
