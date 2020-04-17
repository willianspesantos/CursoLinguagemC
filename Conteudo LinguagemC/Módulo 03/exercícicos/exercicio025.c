#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //DECLARAÇÃO DAS VARIAVEIS
    time_t tempo;
    time(&tempo);
    struct tm*data;
    data = localtime(&tempo);
    int atual = data->tm_year;
    int ano, idade, pass, falt;

    printf("<<< EX025 - Serviço Militar v2.0 >>>");
    printf("\n\nAtualmente estamos no ano de %i.", atual + 1900);
    printf("\nEm que ano você nasceu? ");
    scanf("%i", &ano);
    printf("\n----------------------------------------------------");

    //CALCULO DAS VARIAVEIS
    idade = (atual + 1900) - ano;
    pass  = (atual + 1900) - (ano + 18);
    falt  = (ano + 18) - (atual + 1900);

    printf("\nSua idade atual é de %i anos.", idade);

    //CONDIÇÃO
    if      (idade > 18)    printf("\nSeu alistamento foi em %i. Já se passaram %i anos.", ano + 18, pass);
    else if (idade < 18)    printf("\nSeu alistamento será em %i. Ainda faltam %i anos.", ano + 18, falt);
    else if (idade == 18)   printf("\nVocê completa 18 anos exatamente este ano. Vá se alistar!");
    printf("\n----------------------------------------------------");
}
