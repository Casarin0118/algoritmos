#include <stdio.h>
#include <string.h> // Para usar a função strcmp

int main()
{
    char operacao[20]; // operacao deve ser uma string para comparar com outras strings
    float numero1;
    float numero2;

    printf("\n Digite o primeiro numero: ");
    scanf("%f", &numero1); 
    printf("\n Digite o segundo numero: ");
    scanf("%f", &numero2); 

    printf("\n Qual operacao voce precisa? (escreva em letra minuscula e sem acentuacao): ");
    scanf("%s", operacao); 

    if (strcmp(operacao, "soma") == 0) //  strcmp para comparar strings
    {
        float resultado1 = numero1 + numero2;
        printf("\n O resultado e: %.2f", resultado1);
    }
    else if (strcmp(operacao, "subtracao") == 0) // strcmp para comparar strings
    {
        float resultado2 = numero1 - numero2;
        printf("\n O resultado e: %.2f", resultado2);
    }
    else if (strcmp(operacao, "divisao") == 0) // strcmp para comparar strings
    {
        if (numero2 != 0) // Verifica se o segundo número é diferente de zero para evitar divisão por zero
        {
            float resultado3 = numero1 / numero2;
            printf("\n O resultado e: %.2f", resultado3);
        }
        else
        {
            printf("\n Nao e possivel dividir por zero.");
        }
    }
    else if (strcmp(operacao, "multiplicacao") == 0) // strcmp para comparar strings
    {
        float resultado4 = numero1 * numero2;
        printf("\n O resultado e: %.2f", resultado4);
    }
    else
    {
        printf("\n Operacao invalida.");
    }

    return 0;
}
