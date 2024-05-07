#include <stdio.h>

int main()
{
    float numeros[10];
    float soma = 0, maior = 0;
    float media, menor = 0;
    float numero2;
    int sim = 0;



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
        if (numeros[z] == numero2)
        {
            sim = 1;
        }
        
 
        if (numeros[z] > maior)
        {
            maior = numeros[z];
        }
    }

    if (sim = 1)
    {
        printf("\n este numero existe");

    } else{
        printf("\n este numero não existe");
    }
    
    
    printf("\n A media e = %.2f", media);
    printf("\n O maior numero e = %.2f", maior);
    printf("\n O menor numero e = %.2f", menor);

    return 0;
}