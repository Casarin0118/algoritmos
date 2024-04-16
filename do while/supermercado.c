#include <stdio.h>
int main() {
    int numeroitens;
    float total = 0.0;
    float desconto = 0.0;
    float precoitem;
    printf("\nQuantos itens voce deseja comprar? \n");
    scanf("%d", &numeroitens);
    int i = 0;
    do {
        printf("\nDigite o preco do item %d: \n", i + 1);
        scanf("%f", &precoitem);
        total += precoitem;
        i++;
    } while (i < numeroitens);

    if (total <= 100) {
        desconto = 0.05;
    } else if (total >= 101) {
        desconto = 0.08;
    }
    float total_com_desconto = total - (total * desconto);
    printf("\nO total dos itens e: R$%.2f\n", total);
    printf("O desconto aplicado e de: %.2f%%\n", desconto * 100);
    printf("O total com desconto e: R$%.2f\n", total_com_desconto);
    return 0;
}
