#include <stdio.h>
int main()
{
    int num_items;
    float total = 0.0;
    char  tem_cupom;
    float desconto = 0.0;
    
    printf("\nQuantos itens voce deseja comprar? \n");
    scanf("%d", &num_items);

    
    int i = 0;
    do {
        float precoitem;
        printf("\nDigite o preco do item %d: \n", i + 1);
        scanf("%f", &precoitem);
        total += precoitem;
        i++;
    } while (i < num_items);

    printf("\nVoce tem cupom de desconto? (s/n): \n");
    scanf(" %c", &tem_cupom);

    if ( tem_cupom == 's' ||  tem_cupom == 'S') {
        printf("\nDigite o valor do desconto do cupom: \n");
        scanf("%f", &desconto);
    }

    float total_com_desconto = total - desconto;

    printf("\nTotal dos itens: R$ %.2f\n", total);
    if ( tem_cupom == 's' ||  tem_cupom == 'S') {
        printf("\nDesconto do cupom: R$ %.2f\n", desconto);
        printf("\nTotal a pagar com desconto: R$ %.2f\n", total_com_desconto);
    } else {
        printf("Total a pagar: R$ %.2f\n", total);
    }
    return 0;
}
