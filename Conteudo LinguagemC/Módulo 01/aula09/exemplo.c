#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int n = rand() % 10;  // VAI SER GERADO O N�MERO DE 0 A 9.

    printf("\nEu gerei o n�mero %i.", n);
}
