#include <stdio.h>

float calcular_custo(float km_percorrido, float litros_abastecidos, float valor_combustivel)
{
    float custo = 0;
    custo = km_percorrido * valor_combustivel;
    return custo;
}

int main()
{
    float total_km_percorrido = 0;
    float total_litros_abastecidos = 0;
    float total_valor_total = 0;
    char data[11];

    printf("Digite a data (dd/mm/aaaa): ");
    scanf("%c", data);

    printf("Digite o km percorrido: ");
    scanf("%f", &total_km_percorrido);

    printf("Digite os litros abastecidos: ");
    scanf("%f", &total_litros_abastecidos);

    printf("Digite o valor do combustivel: ");
    scanf("%f", &total_valor_total);

    float custo = calcular_custo(total_km_percorrido, total_litros_abastecidos, total_valor_total);

    total_valor_total += custo;

    printf("Deseja continuar? (1/0) ");
    int continuar;
    scanf("%d", &continuar);

    printf("Relatorio:\n");

    printf("Total km percorrido: %.2f\n", total_km_percorrido);
    printf("Total litros abastecidos: %.2f\n", total_litros_abastecidos);
    printf("Total valor total: %.2f\n", total_valor_total);

    return 0;
}