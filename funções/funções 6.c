#include <stdio.h>

float calcularJuros(float valor, int parcelas, float taxaDeJurosAnual) {
    float taxaDeJurosMensal = taxaDeJurosAnual / 12;
    float valorTotalPago = valor + (valor * taxaDeJurosMensal * parcelas);
    return valorTotalPago;
}

int main() {
    float valorDoApartamento;
    int quantidadeDeParcelas;

    printf("Digite o valor do apartamento: ");
    scanf("%f", &valorDoApartamento);

    printf("Digite a quantidade de parcelas: ");
    scanf("%d", &quantidadeDeParcelas);

    float taxaDeJurosAnual;
    float valorTotalPago;

    if (quantidadeDeParcelas <= 60) {
        taxaDeJurosAnual = 0.025;
    } else if (quantidadeDeParcelas <= 120) {
        taxaDeJurosAnual = 0.05;
    } else {
        taxaDeJurosAnual = 0.08;
    }

    valorTotalPago = calcularJuros(valorDoApartamento, quantidadeDeParcelas, taxaDeJurosAnual);

    printf("Valor total pago: R$ %.2f\n", valorTotalPago);

    return 0;
}