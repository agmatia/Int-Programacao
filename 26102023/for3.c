#include <stdlib.h>
#include <locale.h>


int testeMaior(int n1, int n2);
int testeMenor(int n1, int n2);
int ordem(int opcao, int maior, int menor, int n1, int n2);

void main(){
   int n1, n2, maior, menor, cont, op;
   setlocale(LC_ALL, "PORTUGUESE");

   printf("Digite dois números diferentes: ");
   scanf("%d %d", &n1, &n2);

   printf("-----------------------------------------\n");
   printf("Opções disponíveis: \n");
   printf("1) ordem crescente \n");
   printf("2) ordem decrescente \n");
   printf("-----------------------------------------\n");
   printf("Escolha uma opção: \n");
   scanf("%d", &op);

   system("cls");

   maior = testeMaior(n1, n2);
   menor = testeMenor(n1, n2);
   ordem(op, maior, menor, n1, n2);
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

int ordem(int opcao, int maior, int menor, int n1, int n2){
int cont;

   maior = testeMaior(n1, n2);
   menor = testeMenor(n1, n2);

   switch(opcao){
   case 1:
      for(cont = menor; cont <= 0; cont++){
      printf("%d", cont);
      printf("\n");
      break;
   }
   case 2:
      for(cont = maior; cont >= menor; cont--){
      printf("%d", cont);
      printf("\n");
      break;
   }
   default:
      printf("A opção não existe.");
   }
   return 0;
}
