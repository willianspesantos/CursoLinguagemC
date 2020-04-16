#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //DECLARAÇÃO DAS VARIAVEIS
    int ano, idade;
    time_t tempo;
    time(&tempo);
    struct tm*data;
    data = localtime(&tempo);
    int iano = data->tm_year + 1900;


    printf("<<< EX017 - Fila de Banco >>>\n\n");
    printf("Em que ano você nasceu? ");
    scanf("%i", &ano);
    printf("\n-------------------------------");

    //CALCULO
    idade = iano - ano;

    printf("\nVocê tem %i anos, certo?", idade);
    printf("\nSeja bem-vindo ao banco ESTUDONAUTA!");

    //CONDIÇÃO
    if(idade > 64){
        printf("\n=== ATENÇÃO! DIRIJA-SE PARA A FILA PREFERENCIAL ===");
    }

    printf("\n-------------------------------");
}
