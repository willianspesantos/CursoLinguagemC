#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX015 - Bons alunos merecem parab�ns!! >>>\n\n");

    //Declara��o das variaveis.
    float nt1, nt2, media;

    printf("\nDigite sua primeira nota: ");
    fflush(stdin);
    scanf("%f", &nt1);
    printf("\nDigite sua segunda nota: ");
    fflush(stdin);
    scanf("%f", &nt2);

    //Calculo das variaveis.
    media = (nt1 + nt2) / 2;

    //condi��o simples
    if(media >= 7){
        printf("MEUS PARAB�NS! ");
    }

    printf("A sua m�dia final foi %.1f.", media);





}
