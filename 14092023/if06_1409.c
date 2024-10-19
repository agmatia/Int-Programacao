#include <stdio.h>
#include <locale.h>
#define DIV 2

void main(){
   float nota1, nota2, media;
   setlocale(LC_ALL, "PORTUGUESE");

      printf("Digite a 1° nota: ");
         scanf("%f", &nota1);

      printf("Digite a 2° nota: ");
         scanf("%f", &nota2);

   media = ((nota1 + nota2)/DIV);

      if(media >= 6.00){
         printf("\nAPROVADO");

      } else{
         printf("\nREPROVADO");
      }
}


