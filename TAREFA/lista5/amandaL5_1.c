//Amanda - Feito em aula.

#include <stdio.h>
#include <string.h>

#define OURO 3
#define PRATA 2
#define BRONZE 1

void main(){
   char pais1[20], pais2 [20], pais3[20];
   int cod, cod1, cod2, cod3;
   int o1, o2, o3;
   int p1, p2, p3;
   int b1, b2, b3;
   int pont1, pont2, pont3;

   printf("Entre com o nome dos tres paises: \n");
   scanf("%s %s %s", &pais1, &pais2, &pais3);

   printf("Digite a quantidade de medalhas de ouro para os tres paises: \n");
   scanf("%d %d %d", &o1, &o2, &o3);

   printf("Digite a quantidade de medalhas de prata para os tres paises: \n");
   scanf("%d %d %d", &p1, &p2, &p3);

   printf("Digite a quantidade de medalhas de bronze para os tres paises: \n");
   scanf("%d %d %d", &b1, &b2, &b3);

   pont1 = (o1 * OURO) + (p1 * PRATA) + (b1 * BRONZE);
   pont2 = (o2 * OURO) + (p2 * PRATA) + (b2 * BRONZE);
   pont1 = (o3 * OURO) + (p3 * PRATA) + (b3 * BRONZE);

   printf("O pais %s teve %d pontos \n", pais1, pont1);
   printf("O pais %s teve %d pontos \n", pais2, pont2);
   printf("O pais %s teve %d pontos \n", pais3, pont3);

   if(pont1 > pont2){
        if(pont1 > pont3){
             if(pont2 > pont3){
                printf("Primeiro colocado: %s", pais1);
                printf("Segundo colocado: %s", pais2);
                printf("Terceiro colocado: %s", pais3);

             }else{
                printf("Primeiro colocado: %s", pais1);
                printf("Segundo colocado: %s", pais3);
                printf("Terceiro colocado: %s", pais2);

        }else{
            printf("Primeiro colocado: %s", pais3);
            printf("Segundo colocado: %s", pais1);
            printf("Terceiro colocado: %s", pais2);
        }

        }else if(pont2 > pont3){
            if(pont3 > pont1){
                printf("Primeiro colocado: %s", pais2);
                printf("Segundo colocado: %s", pais3);
                printf("Terceiro colocado: %s", pais1);

            }else{
                printf("Primeiro colocado: %s", pais2);
                printf("Segundo colocado: %s", pais1);
                printf("Terceiro colocado: %s", pais3);
            }

        }else{
            printf("Primeiro colocado: %s", pais3);
            printf("Segundo colocado: %s", pais2);
            printf("Terceiro colocado: %s", pais1);
        }
    }
}
