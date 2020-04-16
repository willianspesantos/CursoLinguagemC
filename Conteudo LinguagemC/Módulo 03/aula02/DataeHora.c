#include <stdio.h>
#include <time.h>

void main(){


   time_t tempo;
   time(&tempo);
   struct tm*data;
   data = localtime(&tempo);
   int dia = data->tm_mday;
   int mes = data->tm_mon + 1;       //em consideração que na biblioteca o mês "janeiro" tem valor "0".
   int ano = data->tm_year + 1900;   //em consideração que na biblioteca o ano "0" é "1900".

   printf("\n\n\nHoje é dia %i, do mês %i do ano de %i", dia, mes, ano);

}
