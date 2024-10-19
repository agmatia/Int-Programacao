//Amanda

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

gabarito(char q1, char q2, char q3);

void main(){
char questao1, questao2, questao3;
int pontuacao;
setlocale(LC_ALL, "PORTUGUESE");

    printf("Informe as respostas para as questões 1, 2 e 3, respectivamente: \n");
    scanf("%c %c %c", &questao1, &questao2, &questao3);

    system ("cls");

    //gabarito
    pontuacao = gabarito(questao1, questao2, questao3);

    printf("Quantidade de acertos: %d", pontuacao);
}

gabarito(char q1, char q2, char q3){
int pont1, pont2, pont3, pontos;

    if(q1 == 'c' || q1 == 'C'){
        pont1 = 1;
    }else{
        pont1 = 0;
    }
    
    if(q2 == 'a' || q2 == 'A'){
        pont2 = 1;
    }else{
        pont2 = 0;
    }
    
    if(q3 == 'b' || q3 == 'B'){
        pont3 = 1;
    }else{
        pont3 = 0;
    }
    pontos = (pont1 + pont2 + pont3);

    return pontos;
}
