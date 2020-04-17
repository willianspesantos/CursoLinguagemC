#include <stdio.h>

const int TAM = 2;

int main ()

{

  int idade[TAM]={25,48};

  int troca;

  printf ("\n Antes da Troca: ");

  printf ("\n  %d ", idade [0]);

  printf ("\n  %d ", idade [1]);

  troca = idade[0];

  idade [0]= idade [1];

  idade [1] = troca;

  printf ("\n Depois da Troca: ");

  printf ("\n  %d ", idade [0]);

  printf ("\n  %d ", idade [1]);

  return 0;
}
