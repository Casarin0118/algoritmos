#include <stdio.h>

int main() {
    
    float taxaCambio = 5.00;
    float valor;
    char escolha;

    
    printf("Digite o valor: ");
    scanf("%f", &valor);

    printf("Qual moeda esta este valor? \n (R para real, D para dolar): ");
    scanf(" %c", &escolha);

    if (escolha == 'R' || escolha == 'r') {

        // Converter real para dólar
        float valorEmDolar = valor / taxaCambio;
        printf("%.2f reais equivalem a %.2f dolares.\n", valor, valorEmDolar);


    } else if (escolha == 'D' || escolha == 'd') {
        // Converter dólar para real
        float valorEmReal = valor * taxaCambio;
        printf("%.2f dolares equivalem a %.2f reais.\n", valor, valorEmReal);


    } else {
        // Opção inválida
        printf("Escolha invalida. Por favor, insira R para real ou D para dolar.\n");
    }

    return 0;
}
