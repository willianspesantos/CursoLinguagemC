#include <stdio.h>
#include <locale.h>
#include <string.h>


void main(){
        setlocale(LC_ALL, "Portuguese");
        printf("{ EXERC�CIO 024 - Qual � o seu estado? }");
		printf("\nEm que estado do Brasil voc� nasceu? ");
		char estado [4];
		gets(estado);
		strupr(&estado);

		printf("\nNascendo em %s", estado);
		if((strcmp(strupr(estado), "RJ") == 0)){
            printf(" voc� � FLUMINENSE");
    } else if((strcmp(strupr(estado), "SP") == 0)){
           printf(" voc� � PAULISTA");
    } else if ((strcmp(strupr(estado), "MG") == 0)){
           printf(" voc� � MINEIRO");
    } else if ((strcmp(strupr(estado), "ES") == 0)){
           printf(" voc� � CAPIXABA");
    } else if ((strcmp(strupr(estado), "BH") == 0)){
           printf(" voc� � BAHIANO");
    } else if ((strcmp(strupr(estado), "RG") == 0)){
           printf(" voc� � GA�CHO");
    } else if ((strcmp(strupr(estado), "GO") == 0)){
           printf(" voc� � GOIANO");
    } else if ((strcmp(strupr(estado), "SC") == 0)){
           printf(" voc� � CATARINENSE");
    } else {
           printf("\nVoc� � natural de sua cidade , mas ainda n�o sei como te chamar!");
    }
    printf("\n----------------------------------------------------");




}
