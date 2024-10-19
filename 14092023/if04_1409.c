#include <stdio.h>
#include <locale.h>
#define MAIOR 18

void main(){
   int idade;
   setlocale(LC_ALL, "PORTUGUESE");

      printf("Digite sua idade: ");
         scanf("%d", &idade);

      if(idade >= MAIOR){
         printf("\nVocé é maior de idade");

      } else{
         printf("\nVocê é menor de idade");
      }
}

