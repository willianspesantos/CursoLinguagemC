#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("O %s tem %i anos de idade!", "Willians", 30);
    printf("\nSeu peso atual � de %5.2f kg", 81.62);

    /*5.2 representa: '5' n�meros de spa�os reservados
     e '2' quantidade de casas ap�s a virgula! */

    printf("\nO seu sexo � %c", 'M');

}
