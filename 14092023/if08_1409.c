#include <stdio.h>
#include <windows.h>
#include <math.h>

#define FUSO 3
#define DOZE 12

void main(){
   SYSTEMTIME data;
   GetSystemTime (&data);

   int anoc = data.wYear;
   int mesc = data.wMonth;
   int horac = (data.wHour - FUSO);

   char nome[50];
   int nasc;
   float idade, mes;

   printf("Digite seu nome \n");
   scanf("%s", &nome);

   printf("Digite seu mes de nascimento \n");
   scanf("%f", &mes);

   printf("Digite seu ano de nascimento \n");
   scanf("%d", &nasc);

   if(mes <= mesc){
      idade = (anoc-nasc);

   }else{
      mes = DOZE - mes;
      idade = floor(( ( (anoc-nasc) * DOZE) - mes) / DOZE);
   }

   if(horac < 12){
      printf("Bom dia, %s! Voce tem %.0f anos", nome, idade);

   }else{
      printf("Boa tarde, %s! Voce tem %.0f anos ", nome, idade);
   }

}

/*
 mes = DOZE - mes;
      idade = floor(( ( (anoc-nasc) * DOZE) - mes) / DOZE);

      podeser substituido por:

      if(mes > mesc){
         idade--;
      }
*/
