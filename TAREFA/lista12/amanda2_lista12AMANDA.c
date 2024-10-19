#include <stdio.h>
#include <stdlib.h>

#define DEZ 10

int main(){
int matriz[10][10], i, j, cont, indice;
int maiores = 0;
int menores = 0;

    // Preenchendo a matriz e encontrando os maiores elementos de cada linha
    for (i = 0; i < DEZ; i++) {
        for (j = 0; j < DEZ; j++) {
            printf("Insira o numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("-----------------------------------");
    printf("\nMaiores elementos de cada linha:\n");
    for (i = 0; i < DEZ; ++i) {
        maiores = matriz[i][0];  // Inicializa com o primeiro elemento da linha
        for (cont = 1; cont < DEZ; cont++) {
            if (maiores < matriz[i][cont]) {
                maiores = matriz[i][cont];
            }
        }
        printf("Linha %d: %d\n", i + 1, maiores);
    }


    // Imprimindo os menores elementos de cada coluna
    printf("\nMenores elementos de cada coluna:\n");
    for (j = 0; j < DEZ; ++j) {
        menores = matriz[0][j];  // Inicializa com o primeiro elemento da coluna
        for (cont = 1; cont < DEZ; cont++) {
            if (menores > matriz[cont][j]) {
                menores = matriz[cont][j];
            }
        }
        printf("Coluna %d: %d\n", j + 1, menores);
    }

    return 0;
}
