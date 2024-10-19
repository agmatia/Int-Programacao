//Amanda
#include <stdio.h>
#include <math.h>

#define PI 3.141592

float rai0(float num);
float vol(float num1);

void main(){
float diametro;
float volume;

   printf("Digite o diametro da bola: ");
   scanf("%f", &diametro);

   volume = vol(diametro);

   printf("Para a bola de diametro %.2f, o volume e: %f", diametro, volume);
}

float rai0(float num){
   return (num/2);
}

float vol(float num1){
   return (4 * PI * pow(rai0(num1), 3)) / 3;
}
