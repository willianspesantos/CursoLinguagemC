#include <stdio.h>
#include <time.h>

void main(){


   time_t tempo;
   time(&tempo);
   struct tm*data;
   data = localtime(&tempo);
   int dia = data->tm_mday;
   int mes = data->tm_mon + 1;       //em considera��o que na biblioteca o m�s "janeiro" tem valor "0".
   int ano = data->tm_year + 1900;   //em considera��o que na biblioteca o ano "0" � "1900".

   printf("\n\n\nHoje � dia %i, do m�s %i do ano de %i", dia, mes, ano);

}
