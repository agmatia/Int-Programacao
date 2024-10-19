//Amanda

#include <stdio.h>
#include <string.h>

void main(){
   char user[20], senha [20];

   printf("Digite o seu usuario: \n");
   scanf("%s", &user);


   printf("Digite a sua senha: \n");
   scanf("%s", &senha);

   if(strcmp(user, "admin") == 0){        //STRCMP Compara o conteúdo de duas strings (retornos: 0, <0 e >0)
      printf("\nO usuario e um adm.\n");

      if(strcmp(senha, "admin123") == 0){
         printf("\nNivel 1 de acesso");
      }else{
         printf("Senha incorreta");
      }

   }else{
      if(strcmp(user, "gerente") == 0){
         printf("\nO usuario e gerente.\n");

         if(strcmp(senha, "gerente123") == 0){
            printf("\nNivel 2 de acesso\n");
         }else{
            printf("\nSenha incorreta");
         }

      }else{
         printf("\nO usuario nao existe");
      }
   }
}
