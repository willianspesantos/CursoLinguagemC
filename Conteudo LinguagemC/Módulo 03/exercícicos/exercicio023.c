#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n1;

    printf("<<< EX023 - Positivo ou Negativo >>>");
    printf("\nMe diga um número e eu te direi se\nele é POSITIVO, NEGATIVO ou NULO.");
    printf("\n\nDigite um número: ");
    scanf("%i", &n1);

    //CONDIÇÃO ANINHADA
    if(n1 > 0){
        printf("\nO valor %i é POSITIVO.", n1);
    } else if (n1 < 0){
        printf("\nO valor %i é NEGATIVO.", n1);
    } else {
        printf("\nO valor %i é NULO.",n1);
    }



}
