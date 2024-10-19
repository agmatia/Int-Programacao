// Amanda Matia

#include <stdio.h>

#define P15 0.15
#define P20 0.20

void main(){
   float peso, peso15, peso20;

   printf("Digite o seu peso \n");
      scanf("%f", &peso);

   peso15 = (peso + (peso*P15));

   peso20 = (peso + (peso*P20));

   printf("Seu peso caso engordasse 15% a mais seria: %.f \n", peso15);
   printf("Seu peso caso engordasse 20% a mais seria: %.f \n", peso20);



}
