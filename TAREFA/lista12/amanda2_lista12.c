#include <stdio.h>
#include <stdlib.h>

#define DEZ 4

int main(){
int matriz[DEZ][DEZ], i, j;
int maioresLin [DEZ], menoresCol[DEZ];
int maiores = 0;
int menores = 0;

    // Preenchendo a matriz e encontrando os maiores elementos de cada linha
   for (i = 0; i < DEZ; i++) {
      for (j = 0; j < DEZ; j++) {
         printf("Insira o numero: ");
         scanf("%d", &matriz[i][j]);
      }
      printf("\n");
   }
   system("cls");
   printf("-----------------------------------");

   printf("\nMaiores elementos de cada linha:\n");
   for (i = 0; i < DEZ; ++i) {
      maiores = matriz[i][0];  // Inicializa com o primeiro elemento da linha
      for (j = 1; j < DEZ; j++) {
         if (maiores < matriz[i][j]) {
            maiores = matriz[i][j];
         }
      }
      printf("%d ", maiores);
   }
   printf("\n");
   printf("\n-----------------------------------");

    // Imprimindo os menores elementos de cada coluna
   printf("\nMenores elementos de cada coluna:\n");
   for (j = 0; j < DEZ; ++j) {
      menores = matriz[0][j];  // Inicializa com o primeiro elemento da coluna
      for (i = 1; i < DEZ; i++) {
         if (menores > matriz[i][j]) {
                menores = matriz[i][j];
         }
      }
      printf("%d ", menores);
   }

   return 0;
}
