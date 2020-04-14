#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int a = 3, b = 5, res1, res2;

    res1 = (a < b);
    res2 = (a > b);

    /*LEMBRE-SE EM RESULTADOS LOGICOS 0 --> REPRESENTA FALSO
    E 1 -->REPRESENTA VERDADEIRO*/

    printf("\n%Primeiro resultado foi %i e o segundo resultado foi %i", res1, res2);



}
