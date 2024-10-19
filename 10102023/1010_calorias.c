//Amanda

#include <stdio.h>
#include <stdlib.h>

#define MET_CAMINHADA 2.9
#define MET_CORRIDA 8.0
#define MET_NATACAO 7.0
#define MET_CICLISMO 8.0

float calculaCalorias(float num, float hora, float mett);
int tipoExercicio(int exercicio);

void main(){
float calorias, peso, horas, met;
int cod;

   printf("Opcoes disponiveis: \n");
   printf("1) caminhada leve \n");
   printf("2) corrida 8 Km/h \n");
   printf("3) natacao \n");
   printf("4) ciclismo 16-19 Km/h \n");

   printf("------------------------------ \n");
   printf("Informe sua opcao: ");
   scanf("%d", &cod);

   printf("------------------------------ \n");
   printf("Informe o peso: ");
   scanf("%f", &peso);

   printf("------------------------------ \n");
   printf("Informe a duracao da atividade: ");
   scanf("%f", &horas);

   calorias = calculaCalorias(peso, horas, tipoExercicio(cod) );

   system("cls");
   printf("A quantidade de calorias perdidas foi: %.2f \n", calorias);
}

int tipoExercicio(int exercicio){

   switch(exercicio){
   case 1:
      return MET_CAMINHADA;
      break;
   case 2:
      return MET_CORRIDA;
      break;
   case 3:
      return MET_NATACAO;
      break;
   case 4:
      return MET_CICLISMO;
      break;
   default:
      system("cls");
      printf("Exercico nao identificado!");
      exit(0);
   }
}

float calculaCalorias(float num, float hora, float mett){
float caloria;

   caloria = (num * hora * mett);
   return caloria;
}
