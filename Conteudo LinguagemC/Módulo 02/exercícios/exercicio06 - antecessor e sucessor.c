#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");

    printf("<<< EX006 - Antecessor e Sucessor >>>\n");
    printf("Digite um n�mero: ");

    int num1;

    scanf("%i", &num1);

    int num2 = num1 - 1;
    int num3 = num1 + 1;

    printf("\nAnalisando o n�mero %i, seu antecessor � %i e seu sucessor � %i.", num1, num2, num3);



}
