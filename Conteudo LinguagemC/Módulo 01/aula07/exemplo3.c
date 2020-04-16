#import <stdio.h>
#include <locale.h>

void main(){

    char r;
    char s;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite uma letra: ");
    fflush(stdin);
    getchar("%c", &r);                  //getchar() COMANDO PARA FAZER LEITURAS DE CARACTERES!
    printf("Digite outra letra: ");
    fflush(stdin);
    getchar("%c", &s);
    printf("Você digitou as letras \"%c\" e \"%c\"", r, s);

}
