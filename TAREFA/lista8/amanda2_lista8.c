#include <stdio.h>
#define CINQ 50
#define CEM 100

void main(){
int C;
float F;

    printf("|  C  |  F  | \n");

    for(C = CINQ; C < CEM; C++){
        F = (C*1.8)+32;
        printf("| %d  | %.2f | \n", C, F);
    }
    for(C = CEM; C <= 150; C++){
        F = (C*1.8)+32;
        printf("| %d | %.2f | \n", C, F);
    }
}

