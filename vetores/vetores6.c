#include <stdio.h>

int main()
{
    float numeros[10];
    float soma = 0, maior = 0;
    float media, menor = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("\n Digite o numero:\n");
        scanf("%f", &numeros[i]);
        soma += numeros[i];

        if (i == 0 || numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }

    media = soma / 10.0;

    printf("\n os numeros coletados sao:");

    for (int z = 0; z < 10; z++)
    {
        printf("\n%.2f", numeros[z]);

        if (numeros[z] > maior)
        {
            maior = numeros[z];
        }
    }

    printf("\n A media e = %.2f", media);
    printf("\n O maior numero e = %.2f", maior);
    printf("\n O menor numero e = %.2f", menor);

    return 0;
}