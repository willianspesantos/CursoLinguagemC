#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int n = rand() % 5 + 1;
    int p;

    printf("\n<<< EX005 - Será que você acerta? >>>");
    printf("\n\nVou pensar em um número de 1 á 5. Tente adivinhar!");
    printf("\nQual é o seu palpite? ");
    scanf("%i", &p);
    printf("\nEu pensei no número %i e você penssou no número %i.", n, p);
}
