/*EXERC�CIO 02 DO CURSO DE LINGUAGEM C DA PLATAFORMA
  ESTUDONAUTA, PROFESSOR GUSTAVO GUANABARA.*/


#include <stdio.h>
#include<locale.h>  //NECESS�RIO PARA USAR SETLOCALE
void main(){

    setlocale(LC_ALL, "Portuguese"); //COMANDO PARA LOCALIZAR O PROGRAMA INCLUINDO ACENTUA��ES

    printf("<<< EX002 - Especiais >>>\n\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\\a\t\=\tBeep\n");
    printf("\\n\t\=\tNova Linha\n");
    printf("\\t\t\=\tTabula��o\n");
    printf("\\\\\t\=\tBarra\n");
    printf("%%%%\t\=\tPorcentagem\n");
    printf("\\?\t\=\tInterroga�ao\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}
