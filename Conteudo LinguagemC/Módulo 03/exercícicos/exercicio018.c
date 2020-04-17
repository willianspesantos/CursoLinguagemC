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

    printf("<<< EX018 - Servi�o Militar v1.0 >>>\n\n");
    printf("Atualmente estamos no ano de %i.", ano);
    printf("\nEm que ano voc� nasceu? ");
    scanf("%i", &nasc);
    printf("\n-----------------------------------------------------");

    idade = ano - nasc;
    printf("\nSua idade atual � de %i anos.",idade);

    if(idade > 18){

        printf("\nJ� fez 18 anos. Espero sinceramente que j� tenha se alistado.");
    }else{
    printf("\nVoc� ainda n�o tem 18 anos. N�o pode se alistar.");
    }

}
