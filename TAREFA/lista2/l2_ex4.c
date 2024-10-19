// Amanda Matia

#include <stdio.h>

void main(){
   float salarioM, salarioF, salario_equivalente;

   printf("Digite o valor do salario minimo \n");
      scanf("%f", &salarioM);

   printf("Digite o valor do salario do funcionario \n");
      scanf("%f", &salarioF);

   salario_equivalente = (salarioF/salarioM);

   printf("O funcionario recebe o equivalente a %.2f salarios minimos", salario_equivalente);

}
