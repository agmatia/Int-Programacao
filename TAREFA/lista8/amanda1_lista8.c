#include <stdio.h>
#define DEZ 10

void main(){
int num, tabuada, n1;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    for(num = 1; num <= DEZ; num++){
       tabuada = num*n1;
       printf("%d X %d = %d \n", n1, num, tabuada);
    }
}
