#include <stdio.h>

int main() {
    
    float taxaCambio = 5.16;
    float valor;
    char escolha;

    
    printf("Digite o valor: ");
    scanf("%f", &valor);

    printf("Qual moeda esta este valor? \n (R para real, D para dolar): ");
    scanf(" %c", &escolha);

    if (escolha == 'R' || escolha == 'r') {
        float valorEmDolar = valor / taxaCambio;
        printf("%.2f reais equivalem a %.2f dolares.\n", valor, valorEmDolar);


    } else if (escolha == 'D' || escolha == 'd') {
        float valorEmReal = valor * taxaCambio;
        printf("%.2f dolares equivalem a %.2f reais.\n", valor, valorEmReal);


    } else {
        printf("Escolha invalida. Por favor, insira R para real ou D para dolar.\n");
    }

    return 0;
}
