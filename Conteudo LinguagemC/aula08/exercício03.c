#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    int idade;
    float peso;

    printf("<<< EXEC�CIO 003 - DADOS >>>\n\n");
    printf("Qual � o seu nome? ");
    gets(nome);
    printf("\nQuantos anos voc� tem? ");
    fflush(stdin);
    scanf("%i", &idade);
    printf("\nQual o seu peso? ");
    fflush(stdin);
    scanf("%f", &peso);
    printf("\n\n-------<<< PROCESSANDO >>>-------");
    printf("\nMuito prazer, %s. Voc� tem %i anos e pesa %.1f Kilos, correto? ", nome, idade, peso);

}
