#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    time_t tempo;
    time(&tempo);
    struct tm*data;
    data = localtime(&tempo);
    int ano = data->tm_year + 1900;
    int nasc, idade;

    printf("<<< EX018 - Serviço Militar v1.0 >>>\n\n");
    printf("Atualmente estamos no ano de %i.", ano);
    printf("\nEm que ano você nasceu? ");
    scanf("%i", &nasc);
    printf("\n-----------------------------------------------------");

    idade = ano - nasc;
    printf("\nSua idade atual é de %i anos.",idade);

    if(idade > 18){

        printf("\nJá fez 18 anos. Espero sinceramente que já tenha se alistado.");
    }else{
    printf("\nVocê ainda não tem 18 anos. Não pode se alistar.");
    }

}
