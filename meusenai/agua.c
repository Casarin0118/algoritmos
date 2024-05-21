#include <stdio.h>

int main()
{
    int pessoas;
    int ate10 = 0;
    int ate18 = 0;
    int ate25 = 0;
    int maior25 = 0;

    printf("----Qual a quantidade de agua que voce usa em sua casa?----\n");
    printf("Quantas pessoas tem em sua casa?\n");
    scanf("%d", &pessoas);

    int idade[pessoas];

    for (int i = 0; i < pessoas; i++)
    {
        printf("Qual e a idade da pessoa numero %d?\n", i + 1);
        scanf("%d", &idade[i]);

        if (idade[i] <= 10)
        {
            ate10++;
        }
        else if (idade[i] <= 18)
        {
            ate18++;
        }
        else if (idade[i] <= 25)
        {
            ate25++;
        }
        else
        {
            maior25++;
        }
    }

    int qtdadeagua[4];
    qtdadeagua[0] = ate10 * 18;
    qtdadeagua[1] = ate18 * 30;
    qtdadeagua[2] = ate25 * 42;
    qtdadeagua[3] = maior25 * 24;
    int soma = qtdadeagua[0] + qtdadeagua[1] + qtdadeagua[2] + qtdadeagua[3];

        float valotTotal = 0.60 * soma;

    if (ate10 > 0)
    {
        printf("As pessoas com ate 10 anos de idade gastam %d litros de agua.\n", qtdadeagua[0]);
    }
    if (ate18 > 0)
    {
        printf("As pessoas com ate 18 anos de idade gastam %d litros de agua.\n", qtdadeagua[1]);
    }
    if (ate25 > 0)
    {
        printf("As pessoas com ate 25 anos de idade gastam %d litros de agua.\n", qtdadeagua[2]);
    }
    if (maior25 > 0)
    {
        printf("As pessoas com mais de 25 anos de idade gastam %d litros de agua.\n", qtdadeagua[3]);
    }

    printf("\nSua casa ao todo gasta %d litros de agua.\n", soma);
    printf("o valor total gasto com agua e = R$%.2f", valotTotal);

    return 0;
}