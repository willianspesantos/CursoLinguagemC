#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "Portuguese");

    printf("<<< EX015 - Consumidor ganha Desconto! >>>\n\n");

    // Declaração das variaveis.
    float preco, desc, total;

    printf("Qual foi o valor das compras? R$");
    scanf("%f", &preco);
    printf("\n------------------------------");
    printf("\nVocê comprou R$%.2f reais em nossa loja.", preco);

    //Calculo das variaveis.
    desc = (preco * 10) / 100;
    total = preco - desc;

    // Condição
    if(preco > 500){
        printf("\n=====ATENÇÃO=====");
        printf("\nPor fazer mais de R$500,00 em compras, você vai receber R$%.2f de desconto.", desc);
        printf("\nO valor a ser pago é R$%.2f!", total);
    }

    printf("Volte sempre!");
    printf("\n------------------------------");





}
