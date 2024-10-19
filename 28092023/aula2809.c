#include <stdio.h>

void main(){
   float nota1, nota2;
   float mediaA;

   printf("Digite as duas notas: \n");
   scanf("%f %f", &nota1, &nota2);

   mediaA = (nota1 + nota2)/2;

   if(mediaA >=0 && mediaA < 3){
      printf("Reprovado\n");
   }else if(mediaA >=3 && mediaA < 7){
      printf("Recuperacao\n");
   }else if(mediaA >= 7 && mediaA < 10){
      printf("Aprovado\n");
   }else{
      printf("\nA media calculada nao se enquadra do range de valores");
   }
}



