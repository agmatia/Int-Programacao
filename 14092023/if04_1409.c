#include <stdio.h>
#include <locale.h>
#define MAIOR 18

void main(){
   int idade;
   setlocale(LC_ALL, "PORTUGUESE");

      printf("Digite sua idade: ");
         scanf("%d", &idade);

      if(idade >= MAIOR){
         printf("\nVoc� � maior de idade");

      } else{
         printf("\nVoc� � menor de idade");
      }
}

