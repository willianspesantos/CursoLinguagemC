#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("\nDigite o primeiro número: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("\nDigite o primeiro número: ");
    fflush(stdin);
    scanf("%i", &n2);

    if(n1 > n2){
        printf("\nO maior número é %i", n1);
    } else {
        if(n1 < n2){
            printf("\nO maoir número é %i", n2);
        } else {
            printf("\nOs dois são iguais!");
        }
    }
}
