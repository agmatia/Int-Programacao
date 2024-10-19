#include <stdio.h>
#include <locale.h>

void main(){
   float temp;
   setlocale(LC_ALL, "PORTUGUESE");

      printf("Digite a temperatura atual: ");
         scanf("%f", &temp);

      if(temp < 25){
         printf("FRIO (%2.f°C)", temp);

      } else{
      printf("QUENTE (%2.f°C)", temp);
      }

}
