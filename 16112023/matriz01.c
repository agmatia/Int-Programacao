#include <stdio.h>
#include <stdlib.h>

#define LIN 3
#define COL 3
#define TESTE 10

void main(){
int mat[LIN][COL];
int i, j, cont;
int maisZeros = 0, linhaMaisZeros;

   for(i = 0; i < LIN; i++){
      for(j = 0; j < COL; j++){
         do{
            printf("[%d][%d] - Informe o valor: ", i, j);
            scanf("%d", &mat[i][j]);

            if(mat[i][j] != 0 && mat[i][j] != 1){
               printf("Valor invalido. Somente ZERO ou UM \n");
            }

         }while(mat[i][j] != 0 && mat[i][j] != 1);
      }
   }

   system("cls");
   for(i = 0; i < LIN; i++){
      for(j = 0; j < COL; j++){
      printf("%d", mat[i][j]);
      }
      printf("\n");
   }

   for(i = 0; i < LIN; i++){
      cont = 0;
      for(j = 0; j < COL; j++){
         if(mat[i][j] == 0){
            cont++;
         }
      }

      if(cont > maisZeros){
         maisZeros = cont;
         linhaMaisZeros = i+1;

      }
   }
   printf("A linha %d teve %d valores nulos.", linhaMaisZeros, maisZeros);
}
