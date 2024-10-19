#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define PESSOAS 5

void main(){
   float altura;
   float menorAlt, maiorAlt, difPerc;
   float somaAltF = 0, mediaAltF;
   char genero;
   int cont, contF = 0;

   setlocale(LC_ALL, "PORTUGUESE");

   for(cont = 0; cont < PESSOAS; cont++){
      fflush(stdin);
      printf("%d - Digite seu sexo: ", cont+1);
      scanf("%c", &genero);

      printf("%d - Digite sua altura: ", cont+1);
      scanf("%f", &altura);

      if(genero == 'f' || genero == 'F'){
         contF++;                            //saberemos a quantidade de mulheres
         somaAltF += altura;                //somaremos a altura das mulheres com a nova altura digitada
      }
      if(cont == 0){                      // == pois testará somente a primeira pessoa do grupo
         menorAlt = altura;
         maiorAlt = altura;
      }
      if(menorAlt > altura){
         menorAlt = altura;
      }
      if(maiorAlt < altura){
         maiorAlt = altura;
      }
   }
   system("cls");

   mediaAltF = somaAltF / contF;
   printf("A altura média das mulheres é: %.2f\n", mediaAltF);
   printf("O número de meninos é: %d\n", PESSOAS - contF);
   printf("A maior altura é: %.2f\n", maiorAlt);
   printf("A menor altura é: %.2f\n", menorAlt);

   difPerc = abs(contF - (PESSOAS - contF))*100/PESSOAS;
   printf("A diferença percentual entre homens e mulheres é: %.2f%%\n", difPerc);
}
