#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("<<< EX024 - Ordem em Dois Números >>>");
    printf("\n\nM e diga dois números e eu \nos colocarei em ordem crescente.");
    printf("\n\nPrimeiro número: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("\nSegundo número: ");
    fflush(stdin);
    scanf("%i", &n2);

    if      (n1 > n2)   printf("Os números em ordem são %i e %i.\n\n", n2, n1);
    else if (n1 < n2)   printf("Os números em ordem são %i e %i.\n\n", n1, n2);
    else if (n1 == n2)  printf("Os números que você digitou são iguais!.\n\n");
}
