#import <stdio.h>
#include <locale.h>

void main(){

    char nome [30];
    char ender[40];

    setlocale(LC_ALL, "Portuguese");

    printf("Qual � o seu nome: ");
    //scanf("%s");   ----> 'O scanf() N�O � IDEAL PARA LER STRINGS POIS ELA N�O ACEITA ESPA�OS ENTRE AS PALAVRAS.'
    gets(nome);                  //gets() COMANDO ESPECIAL PARA FAZER LEITURAS EM STRINGS! 'N�O PRECISA COLOCAR '$' NA VARIAVEL.
    printf("Informe seu endere�o: ");
    gets(ender);
    printf("Seu nome � \"%s\" que mora na \"%s\"", nome, ender);

}
