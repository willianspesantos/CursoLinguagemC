#import <stdio.h>
#include <locale.h>

void main(){

    char r;
    char s;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite uma letra: ");
    fflush(stdin);                  //fflush() COMANDO PARA LIMPAR O BUFFER e stdin É A ENTRADA PADRÃO.
    scanf("%c", &r);
    printf("Digite outra letra: ");
    fflush(stdin);
    scanf("%c", &s);
    printf("Você digitou as letras \"%c\" e \"%c\"", r, s);

}
