#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");

   printf("<<<EX009 - Preço do Produto >>>\n");
   printf("Produto: Iphone: ");
   printf("\nPreço: R$");

   float preco;

   scanf("%f", &preco);
   printf("\nDesconto: \(%%\) ");

   float desc;

   scanf("%f", &desc);

   float total = preco - (preco * desc) / 100;
   printf("\nO produto iPhone custava R$%.2f, mas com %.2f %% de desconto, passa a custar R$%.2f. ", preco, desc, total);


}
