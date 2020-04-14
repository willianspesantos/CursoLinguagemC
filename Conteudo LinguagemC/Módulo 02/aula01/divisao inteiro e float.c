#include <stdio.h>
#include <locale.h>

void main(){

    int a = 3;                            //O RESULTADO VAI SER CALCULADO COMO INTEIRO
    int b = 2;
    float r = a / b;

    printf("O resultado foi %f\n\n\n\n", r);

    float c = 3;
    float d = 2;                          //DECLARANDO COMO TIPO REAL O RESULTADO SERÁ DO TIPO REAL[FLOAT]
    float s = c / d;

    printf("O resultado foi %.1f", s);




}
