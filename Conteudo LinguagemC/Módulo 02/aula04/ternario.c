#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int a, b, maior;

    printf("\nDigite um número: ");
    scanf("%i", &a);
    printf("\nDigite outro número: ");
    scanf("%i", &b);
    maior = (a > b)?a:b;
    printf("\nEntre o número %i e o número %i, o maior valor digitado foi %i", a, b, maior);



}
