#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");

   printf("<<<EX008 - Alfabeto >>>\n");

   char letra;

   printf("Digite uma letra: ");
   scanf("%c", &letra);

   char ant = letra - 1;
   char dep = letra + 1;

   printf("\nAntes da letra %c temos a letra %c. Depois temos a letra %c.", letra, ant, dep);
}
