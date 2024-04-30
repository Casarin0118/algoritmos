#include <stdio.h>

int main()
{
    float numeros[10];
    float soma = 0, maior = 0;
    float media, menor = 0;
    float numero2;
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

    printf("\n Digite o numero de verificacao \n");
    scanf("%f", &numero2);

    for (int z = 0; z < 10; z++)
    { 
        do
        { 
            if (numero2 == numeros[z])
            {
                printf("\n este numero esta aqui \n");
            }
            else
            {
                printf("\n este numero nao esta aqui \n");
            }
                    
        } while (numeros[z] == numeros [10]);
 
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