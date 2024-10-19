//Amanda Matia

#include <stdio.h>

void main(){
   float ca, co;
   float hipotenusa, somatoria;

   printf("Digite o valor do cateto adjacente \n");
      scanf("%f", &ca);

   printf("Digite o valor do cateto oposto \n");
      scanf("%f", &co);

   somatoria = ((ca*ca) + (co*co));
   hipotenusa = sqrt(somatoria);

   printf("O valor da hipotenusa e: %.2f ", hipotenusa);

}
