#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("O %s tem %i anos de idade!", "Willians", 30);
    printf("\nSeu peso atual é de %5.2f kg", 81.62);

    /*5.2 representa: '5' números de spaços reservados
     e '2' quantidade de casas após a virgula! */

    printf("\nO seu sexo é %c", 'M');

}
