#include <stdio.h>
#include <locale.h>
#include <string.h>


void main(){
        setlocale(LC_ALL, "Portuguese");
        printf("{ EXERCÍCIO 024 - Qual é o seu estado? }");
		printf("\nEm que estado do Brasil você nasceu? ");
		char estado [4];
		gets(estado);
		strupr(&estado);

		printf("\nNascendo em %s", estado);
		if((strcmp(strupr(estado), "RJ") == 0)){
            printf(" você é FLUMINENSE");
    } else if((strcmp(strupr(estado), "SP") == 0)){
           printf(" você é PAULISTA");
    } else if ((strcmp(strupr(estado), "MG") == 0)){
           printf(" você é MINEIRO");
    } else if ((strcmp(strupr(estado), "ES") == 0)){
           printf(" você é CAPIXABA");
    } else if ((strcmp(strupr(estado), "BH") == 0)){
           printf(" você é BAHIANO");
    } else if ((strcmp(strupr(estado), "RG") == 0)){
           printf(" você é GAÚCHO");
    } else if ((strcmp(strupr(estado), "GO") == 0)){
           printf(" você é GOIANO");
    } else if ((strcmp(strupr(estado), "SC") == 0)){
           printf(" você é CATARINENSE");
    } else {
           printf("\nVocê é natural de sua cidade , mas ainda não sei como te chamar!");
    }
    printf("\n----------------------------------------------------");




}
