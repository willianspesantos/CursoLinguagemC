#import <stdio.h>
#include <locale.h>

void main(){

    char nome [30];
    char ender[40];

    setlocale(LC_ALL, "Portuguese");

    printf("Qual é o seu nome: ");
    //scanf("%s");   ----> 'O scanf() NÃO É IDEAL PARA LER STRINGS POIS ELA NÃO ACEITA ESPAÇOS ENTRE AS PALAVRAS.'
    gets(nome);                  //gets() COMANDO ESPECIAL PARA FAZER LEITURAS EM STRINGS! 'NÃO PRECISA COLOCAR '$' NA VARIAVEL.
    printf("Informe seu endereço: ");
    gets(ender);
    printf("Seu nome é \"%s\" que mora na \"%s\"", nome, ender);

}
