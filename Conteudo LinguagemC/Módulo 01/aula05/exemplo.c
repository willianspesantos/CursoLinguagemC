#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    unsigned int idade = 30;
    char nome [] = "Willians";
    char sexo = 'M';
    float peso = 82.39;

    printf("%s do sexo %c, tem %i anos e pesa %.2f kilos.\n", nome, sexo, idade, peso);
    //colocando as  variaveis ao invés dos valores.

  }
