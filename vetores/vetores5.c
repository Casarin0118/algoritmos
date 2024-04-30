#include <stdio.h>

int main()
{
    float numeros[10];
    float soma = 0;
    float media;

    for (int i = 0; i < 10; i++)
    {
        printf("\n Digite o numero:\n");
        scanf("%f", &numeros[i]);

        soma += numeros[i];
    }

    media = soma / 10.0;

    printf("\n os numeros coletados sao:");

    for (int z = 0; z < 10; z++)
    {
        printf("\n%.2f", numeros[z]);
    }

    printf("\n A media e = %.2f", media);
    return 0;
}