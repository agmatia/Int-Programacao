#define DOIS 2

void main(){
   float nota1, nota2;
   float media, soma;

   scanf("%f", &nota1);
   scanf("%f", &nota2);

   soma = (nota1 + nota2);
   media = (soma/DOIS);

   printf("A media e: %f", &media);

}
