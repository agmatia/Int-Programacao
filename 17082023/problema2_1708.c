#include <stdio.h>

 void main(){

 int mediap;
 int nota1, nota2, nota3;
 int peso1, peso2, peso3;

   printf("Digite a primeira nota \n");   // Recebendo nota1
   scanf("%d", &nota1);
   printf("Digite o peso da nota1 \n");   // Recebendo peso1
   scanf("%d", &peso1);

   printf("Digite a segunda nota \n");
   scanf("%d", &nota1);
   printf("Digite o peso da nota2 \n");
   scanf("%d", &peso1);

   printf("Digite a terceira nota \n");
   scanf("%d", &nota1);
   printf("Digite o peso da nota3 \n");
   scanf("%d", &peso1);

   mediap = ((peso1*nota1) + (peso2*nota2) + (peso3*nota3)) / (peso1 + peso2 + peso3);   //calculo da media ponderada

   printf("A media ponderada e: %d", mediap);   // Mostrando resultado do calculo


 }
