#include <stdio.h>

int calcular_gasto(int gasto, int eficiencia)
{
    float lucro = gasto - eficiencia;
    return lucro;
}

int main()
{
    float gasto, metragem;
    float modelo[4];
    modelo [0] = 15.000;
    modelo [1] = 18.000;
    modelo [2] = 22.000;
    modelo [3] = 28.000;
    float eficiencia[4];
    eficiencia [0] = 150.00;
    eficiencia [1] = 190.00;
    eficiencia [2] = 250.00;
    eficiencia [3] = 300.00;
    int escolha;
    printf("Bem-vindo ao totem de atendimento!\n");
    printf("Para calcularmos as vantagens de utilizar placas fotovoltaicas em sua residência precisamos saber:\n");
    printf("Quanto voce gasta mensalmente com energia eletrica?\n");
    scanf("%f", &gasto);
    printf("Qual e o valor da area construida da sua residencia em metros quadrados? \n");
    scanf("%f", &metragem);
    if(metragem <= 60){
        escolha = 0;
        } else if(metragem <= 90){
            escolha = 1;
            } else if(metragem <= 130){
                escolha = 2;
                } else{
                    escolha = 3;}


    printf("Com base nas informacoes fornecidas, recomendamos o modelo de placa fotovoltaica tipo ");
    if(escolha == 0){
        printf("AB\n");
        } else if(escolha == 1){
            printf("ABC\n");
            } else if(escolha == 2){
                printf("ABZ\n");
                } else{
                    printf("ABY\n");}

    printf("Com um investimento de R$ %.2f e uma eficiencia de R$ %.2f por mes.\n", modelo[escolha], eficiencia[escolha]);
    printf("Com a utilizacao de placas fotovoltaicas voce deixara de gastar R$ %d \n", calcular_lucro(gasto, eficiencia[escolha]));
 return 0;
}