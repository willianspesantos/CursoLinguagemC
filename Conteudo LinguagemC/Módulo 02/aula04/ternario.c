#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int a, b, maior;

    printf("\nDigite um n�mero: ");
    scanf("%i", &a);
    printf("\nDigite outro n�mero: ");
    scanf("%i", &b);
    maior = (a > b)?a:b;
    printf("\nEntre o n�mero %i e o n�mero %i, o maior valor digitado foi %i", a, b, maior);



}
