#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX015 - Bons alunos merecem parabéns!! >>>\n\n");

    //Declaração das variaveis.
    float nt1, nt2, media;

    printf("\nDigite sua primeira nota: ");
    fflush(stdin);
    scanf("%f", &nt1);
    printf("\nDigite sua segunda nota: ");
    fflush(stdin);
    scanf("%f", &nt2);

    //Calculo das variaveis.
    media = (nt1 + nt2) / 2;

    //condição simples
    if(media >= 7){
        printf("MEUS PARABÉNS! ");
    }

    printf("A sua média final foi %.1f.", media);





}
