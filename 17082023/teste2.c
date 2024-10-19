#include <stdio.h>

#define P1 2
#define P2 6
#define P3 2

void main (){
   float nota1, nota2, nota3, soma;
   int mediap;

   printf("Digite a primeira nota ");
   scanf("%f", &nota1);

   printf("Digite a segunda nota ");
   scanf("%f", &nota2);

   printf("Digite a terceira nota ");
   scanf("%f", &nota3);

   soma =  (nota1*P1) + (nota2*P2) + (nota3*P3);
   mediap = soma / (P1 + P2 + P3);

   printf("A media ponderada e: %d", mediap);


}
