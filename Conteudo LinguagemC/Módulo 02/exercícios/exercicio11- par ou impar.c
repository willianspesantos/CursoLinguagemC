#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    printf(" <<< EX011 - Par ou Impar >>>\n\n");
    printf("Digite um n�mero qualquer; ");

    int num1, resto, resp;

    scanf("%i", &num1);

    resto = num1 % 2;
    //resp = (resto >= 1)?"impar":"par";

    printf("\nO n�mero %i � um n�mero %s", num1, resp = (resto >= 1)?"impar":"par");


}
