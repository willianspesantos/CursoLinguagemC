#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");

   printf("<<<EX007 - Dobro e Ter�a Parte >>>\n");
   printf("Digite um n�mero: ");

   int num1;

   scanf("%i", &num1);

   int dobro = num1 * 2;
   float terca =(float)num1 / 3;

   printf("\nAnalisando o numero %i, seu dobro � %i e sua ter�a parte � %.2f.", num1, dobro, terca);
}
