#include<stdio.h>
#include<locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");

    int num;
    float med;

    printf("\nDigite um número inteiro: ");
    scanf("%i", &num);
    printf("\nAgora digite um número do tipo real: ");
    scanf("%f", &med);
    printf("Você acabou de digitar os valores %i e %.1f, obrigado!", num, med);

}
