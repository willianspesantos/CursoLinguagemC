#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf(" <<< EX012 - Situa��o do Aluno >>>\n\n");

    float nt1, nt2, media;
    int sit;

    printf("Primeira nota: ");
    scanf("%f", &nt1);
    printf("\nSegunda nota: ");
    fflush(stdin);
    scanf("%f", &nt2);

    media = (nt1 + nt2) / 2;

    printf("\nA m�dia do aluno foi %.2f", media);
    printf("\nA situa��o � %s", sit = (media >= 7)?"aprovado":"reprovado");

}
