#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("<<< EX024 - Ordem em Dois N�meros >>>");
    printf("\n\nM e diga dois n�meros e eu \nos colocarei em ordem crescente.");
    printf("\n\nPrimeiro n�mero: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("\nSegundo n�mero: ");
    fflush(stdin);
    scanf("%i", &n2);

    if      (n1 > n2)   printf("Os n�meros em ordem s�o %i e %i.\n\n", n2, n1);
    else if (n1 < n2)   printf("Os n�meros em ordem s�o %i e %i.\n\n", n1, n2);
    else if (n1 == n2)  printf("Os n�meros que voc� digitou s�o iguais!.\n\n");
}
