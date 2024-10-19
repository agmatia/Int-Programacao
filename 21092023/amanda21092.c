#include <stdio.h>

void main(){
   float nota;

   printf("Digite a nota: ");
   scanf("%f", &nota);

   if(nota >= 90){
      printf("\nConceito A");

   }else{

      if(nota >= 80){
         printf("\nConceito B");

      }else{

         if(nota >= 70){
            printf("\nConceito C");

         }else{
            printf("\nInsuficiente");
         }
      }
   }
}
