#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n1;

    printf("<<< EX023 - Positivo ou Negativo >>>");
    printf("\nMe diga um n�mero e eu te direi se\nele � POSITIVO, NEGATIVO ou NULO.");
    printf("\n\nDigite um n�mero: ");
    scanf("%i", &n1);

    //CONDI��O ANINHADA
    if(n1 > 0){
        printf("\nO valor %i � POSITIVO.", n1);
    } else if (n1 < 0){
        printf("\nO valor %i � NEGATIVO.", n1);
    } else {
        printf("\nO valor %i � NULO.",n1);
    }



}
