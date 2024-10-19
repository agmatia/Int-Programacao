#include <stdlib.h>
#include <locale.h>

int testeMaior(int n1, int n2);
int testeMenor(int n1, int n2);

void main(){
int num1, num2, cont, maior, menor;
setlocale(LC_ALL, "PORTUGUESE");

   printf("Digite os números inicial e final: ");
   scanf("%d %d", &num1, &num2);

   maior = testeMaior(num1, num2);
   menor = testeMenor(num1, num2);

   //printf(">> %d %d <<", maior, menor);
   printf("\n");
   for(cont = menor; cont <= maior; cont++){
      if(cont%2 == 1){
         printf("%d", cont);
         printf("\n");
      }
   }
}

int testeMaior(int n1, int n2){

   if(n1 > n2){
      return n1;
   }else{
      return n2;
   }
}

int testeMenor(int n1, int n2){

   if(n1 < n2){
      return n1;
   }else{
      return n2;
   }
}
