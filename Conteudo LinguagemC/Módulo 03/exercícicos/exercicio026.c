#include <stdio.h>
#include <locale.h>
#include <string.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //DECLARAÇÃO DAS VARIAVEIS
    char estado[2];

    printf("<<< EX026 - Qual é o seu Estado >>>");
    printf("\n\nEm que estado do Brasil você nasceu? ");
    gets(estado);
    strupr(&estado);
    printf("\n----------------------------------------------------");

    //CONDIÇÃO
    if(estado == "RJ"){
            printf("\nNascendo em %s você é FLUMINENSE", estado);
    } else if(estado == "SP"){
           printf("\nNascendo em %s você é PAULISTA", estado);
    } else if (estado == "MG"){
           printf("\nNascendo em %s você é MINEIRO", estado);
    } else if (estado == "ES"){
           printf("\nNascendo em %s você é CAPIXABA", estado);
    } else if (estado == "BH"){
           printf("\nNascendo em %s você é BAHIANO", estado);
    } else if (estado == "RS"){
           printf("\nNascendo em %s você é GAÚCHO", estado);
    } else if (estado == "GO"){
           printf("\nNascendo em %s você é GOIANO", estado);
    } else if (estado == "SC"){
           printf("\nNascendo em %s você é CATARINENSE", estado);
    } else {
           printf("\nVocê é natural de sua cidade , mas ainda não sei como te chamar!");
    }
    printf("\n----------------------------------------------------");

}
