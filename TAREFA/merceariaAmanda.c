#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

#define NUM 1000
#define TAM 50

char nomeMerc[NUM] = "Mercearia Jaraguá";
char ruaMerc[TAM] = "Rua dos Imigrantes";
char bairroMerc[TAM] = "Rau";
char cidadeMerc[TAM] = "Jaraguá do Sul";
char estadoMerc[TAM] = "Santa Catarina";
char cepMerc[TAM] = "89254-430";
char cnpjMerc[TAM] = "37.163.901/0004-92";
int numMerc = 111;

float valor[NUM];
char produto[NUM][TAM], contProduto = 0;
char vendidos[NUM];
char datahora[TAM];
int cod, codigo;
int quant[NUM], cont;

float darDesconto();
float valorVendidos();
void imprimirNF(float desconto);
void pegaDataHora();
void listagemProd(int codigo);
void cadastrar(int i);
void imprimirVendidos();
int escolherProduto();
int menu();
int venda;

void main(){
setlocale(LC_ALL, "PORTUGUESE");

   while(1){
      cod = menu();

      switch(cod){
      case 1:
        cadastrar(contProduto);
        system("cls");
        contProduto++;
        break;

      case 2:
        listagemProd(cod);
        cod = escolherProduto();
        cadastrar(cod-1);
        system("cls");
        break;

      case 3:
        listagemProd(cod);
        break;

      case 4:
        listagemProd(cod);
        cod = escolherProduto();

            if(quant[cod-1] > 0){
                do{
                    printf("Quantidade de produtos:", produto[cod-1]);
                    scanf("%d", &venda);

                if(venda > quant[cod-1]){
                    printf("\nQuantidade Indisponivel!\n");
                }

                }while(venda > quant[cod-1]);
                vendidos[cod-1] += venda;
                quant[cod-1] -= venda;
            }else{
                printf("\nSem estoque para esse produto!\n");
                printf("------------------------------------------\n");
            }
        system("cls");
        break;

      case 5:
         imprimirNF(darDesconto());

      case 6:
         exit(0);

      default:
         printf("Opção inválida.");
         break;
      }
   }
}

int menu(){
int op;
    printf("MENU DE OPÇÕES \n");
    printf("--------------------------\n");
    printf("1) Inserir produto \n");
    printf("2) Alterar produto \n");
    printf("3) Listar produto \n");
    printf("4) Vender produto \n");
    printf("5) Imprimir nota fiscal \n");
    printf("6) Sair do sistema \n");
    printf("--------------------------\n");

    printf("Escolha uma opção: ");
    scanf("%d", &op);
    system("cls");

    return op;
}

void cadastrar(int i){
    printf("Informe o nome do produto: ");
    scanf("%s", &produto[i]);
    printf("\n");

    printf("Informe o valor do produto: ");
    scanf("%f", &valor[i]);
    printf("\n");

    printf("Informe a quantidade: ");
    scanf("%d", &quant[i]);
    printf("\n");

    /*for(i = 0; i < strlen(valor); i++){
        if(valor[i] == '.'){
            valor[i] = ',';
        }
    }*/
}

void listagemProd(int codigo){

    system("cls");
    printf("LISTA DE PRODUTOS: \n");
    printf("-----------------------------------------------\n");
    printf("Código |  Produto  |  Quantidade  |  Preço \n");
    printf("...............................................\n");

    for(int i = 0; i < contProduto; i++){
        printf("[%04d] | %s  |    %5d      |    R$%.2f \n", i + 1, produto[i], quant[i], valor[i]);
    }
    printf("-----------------------------------------------\n");

    if(codigo == 3){
        printf("\n");
        printf("Pressione qualquer tecla para continuar....\n");
        getch();
        system("cls");
    }
}

int escolherProduto(){

    int codigo;
    printf("Codigo do produto: ");
    scanf("%d", &codigo);

    return codigo;
}

void imprimirNF(float desconto){
    pegaDataHora();

    printf(" *---------------------------------------------------\n");
    printf(" | %s\n", strupr(nomeMerc));
    printf(" | %s, %d, %s\n", ruaMerc, numMerc, bairroMerc);
    printf(" | %s %s %s\n", cepMerc, cidadeMerc, estadoMerc);
    printf(" | CNPJ: %s\n", cnpjMerc);
    printf(" *---------------------------------------------------\n");
    printf(" | %s\n", datahora);
    printf(" *---------------------------------------------------\n");
    printf(" | CUPOM FISCAL\n");
    printf(" *---------------------------------------------------\n");
    printf(" | QTDE. | DESCRIÇÃO | VALOR UNI | VALOR TOTAL \n");
    printf(" *---------------------------------------------------\n");

    imprimirVendidos();

    printf(" *---------------------------------------------------\n");
    printf(" | QTDE. TOTAL DE ITENS.............................. %d\n", contarVendidos());
    printf(" | VALOR TOTAL....................................... R$ %.2f\n", valorVendidos());
    printf(" | DESCONTO TOTAL.................................... R$ %.2f\n", desconto);
    printf(" | DINHEIRO.......................................... R$ %.2f\n", valorVendidos() - desconto);
    printf(" *---------------------------------------------------\n");

    printf("Pressione qualquer tecla para continuar...\n\n");
    getch();
}

int contarVendidos(){

    int cont = 0;
    for(int i = 0; i < TAM; i++){
        if(vendidos[i] != 0){
            cont += vendidos[i];
        }
    }
    return cont;
}

float valorVendidos(){

    float soma = 0.0;
    for(int i = 0; i < TAM; i++){
        if(vendidos[i] != 0){
            soma += valor[i] * vendidos[i];
        }
    }
    return soma;
}

float darDesconto(){
    float desconto;

    printf("Sistema de desconto \n");
    printf("------------------------------------------\n");
    printf("Valor do desconto: \n");
    scanf("%f", &desconto);
    system("cls");

    return desconto;
}

void pegaDataHora(){

    int fuso = 3;
    SYSTEMTIME data;
    GetSystemTime(&data);

    int ano = data.wYear;
    int mes = data.wMonth;
    int dia = data.wDay;
    int hora = data.wHour - fuso;
    int minuto = data.wMinute;
    int segundo = data.wSecond;
    sprintf(datahora, "%02d/%02d/%d  %02d:%02d:%d", dia, mes, ano, hora, minuto, segundo);
}

void imprimirVendidos(){

    for(int i = 0; i < TAM; i++){
        if(vendidos[i] != 0){
            printf(" | %2d    | %9s  |   R$%.2f   | R$%.2f \n", vendidos[i], produto[i], valor[i], valor[i] * vendidos[i]);
        }
    }
}
