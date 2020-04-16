#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "Portuguese");

    char n1[20], n2[20], n3[20];
    char sex1, sex2, sex3;
    float nt1, nt2, nt3;

    printf("<<< EXECÍCIO 004 - Listagem >>>\n\n");
    printf("Cadastrando a primneira pessoa:");
    printf("\n---------------------------------");
    printf("\nNOME: ");
    fflush(stdin);
    gets(n1);
    printf("\nSEXO [M/F]: ");
    fflush(stdin);
    scanf("%c,", &sex1);
    printf("\nNOTA: ");
    fflush(stdin);
    scanf("%f", &nt1);
     printf("\n\nCadastrando a segundo pessoa:");
    printf("\n---------------------------------");
    printf("\nNOME: ");
    fflush(stdin);
    gets(n2);
    printf("\nSEXO [M/F]: ");
    fflush(stdin);
    sex2 = getchar();  //   OUTRA MANEIRA DE LER A VARIAVEL.
    printf("\nNOTA: ");
    fflush(stdin);
    scanf("%f", &nt2);
     printf("\n\nCadastrando a terceira pessoa:");
    printf("\n---------------------------------");
    printf("\nNOME: ");
    fflush(stdin);
    gets(n3);
    fflush(stdin);
    printf("\nSEXO [M/F]: ");
    fflush(stdin);
    scanf("%c,", &sex3);
    printf("\nNOTA: ");
    fflush(stdin);
    scanf("%f", &nt3);
    printf("\n\nListagem Completa");
    printf("\n---------------------------------");
    printf("\nNOME                SEXO  NOTA");
    printf("\n%-20s %c %6.1f", n1, sex1, nt1);
    printf("\n%-20s %c %6.1f", n2, sex2, nt2);
    printf("\n%-20s %c %6.1f", n3, sex3, nt3);
    printf("\n---------------------------------");
}
