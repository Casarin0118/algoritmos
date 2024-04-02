#include <stdio.h>

int main()
{
    
    //declaração de variável:

    float celsius;

     
    //Pergunta inicial:


    printf("\n Olá, Voce esta no conversor de Farenheit para Celsius.");

    //Pergunta principal:

    printf("\n Digite a temperatura em celsius");
    scanf("%f", &celsius);

    //processamento

    float farenheit = (celsius * 1.8 + 32);

    //saída de dados
   
    printf("\n A temperatura em farenheit é: %.2fF", farenheit);

    return 0;
}
