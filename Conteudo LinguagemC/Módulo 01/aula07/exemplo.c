#include<stdio.h>
#include<locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");

    int num;
    float med;

    printf("\nDigite um n�mero inteiro: ");
    scanf("%i", &num);
    printf("\nAgora digite um n�mero do tipo real: ");
    scanf("%f", &med);
    printf("Voc� acabou de digitar os valores %i e %.1f, obrigado!", num, med);

}
