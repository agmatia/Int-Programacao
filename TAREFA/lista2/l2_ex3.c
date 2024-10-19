// Amanda Matia

#include <stdio.h>

#define CONVERSOR 32

void main (){
   float tempC, tempF;

   printf("Digite a temperatura em graus Celsius \n");
      scanf("%f", &tempC);

   tempF = ((1.8*tempC) + CONVERSOR);

   printf("A temperatura em Fahrenheit e: %.2f F", tempF);

}
