#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int n = rand() % 5 + 1;
    int p;

    printf("\n<<< EX005 - Ser� que voc� acerta? >>>");
    printf("\n\nVou pensar em um n�mero de 1 � 5. Tente adivinhar!");
    printf("\nQual � o seu palpite? ");
    scanf("%i", &p);
    printf("\nEu pensei no n�mero %i e voc� penssou no n�mero %i.", n, p);
}
