#include <stdio.h>
#include <locale.h>
#include <string.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //DECLARA��O DAS VARIAVEIS
    char estado[2];

    printf("<<< EX026 - Qual � o seu Estado >>>");
    printf("\n\nEm que estado do Brasil voc� nasceu? ");
    gets(estado);
    strupr(&estado);
    printf("\n----------------------------------------------------");

    //CONDI��O
    if(estado == "RJ"){
            printf("\nNascendo em %s voc� � FLUMINENSE", estado);
    } else if(estado == "SP"){
           printf("\nNascendo em %s voc� � PAULISTA", estado);
    } else if (estado == "MG"){
           printf("\nNascendo em %s voc� � MINEIRO", estado);
    } else if (estado == "ES"){
           printf("\nNascendo em %s voc� � CAPIXABA", estado);
    } else if (estado == "BH"){
           printf("\nNascendo em %s voc� � BAHIANO", estado);
    } else if (estado == "RS"){
           printf("\nNascendo em %s voc� � GA�CHO", estado);
    } else if (estado == "GO"){
           printf("\nNascendo em %s voc� � GOIANO", estado);
    } else if (estado == "SC"){
           printf("\nNascendo em %s voc� � CATARINENSE", estado);
    } else {
           printf("\nVoc� � natural de sua cidade , mas ainda n�o sei como te chamar!");
    }
    printf("\n----------------------------------------------------");

}
