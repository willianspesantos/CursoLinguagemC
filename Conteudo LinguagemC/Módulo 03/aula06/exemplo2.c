#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("\nDigite o primeiro n�mero: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("\nDigite o primeiro n�mero: ");
    fflush(stdin);
    scanf("%i", &n2);

    if      (n1 > n2)   printf("\nO maior n�mero � %i", n1);
    else if (n1 < n2)   printf("\nO maoir n�mero � %i", n2);
    else if (n1 == n2)  printf("\nOs dois s�o iguais!");
}
