#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "Portuguese");

    int vel;

    printf("\nDigite a velocidade do autom�vel: ");
    fflush(stdin);
    scanf("%i", &vel);

    if(vel > 80){
        printf("\nMultado!!!");
    }
    printf("\nSe beber, n�o dirija!!!") ;

}
