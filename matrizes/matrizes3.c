#include <stdio.h>

int main()
{
    float notas[3][2];
    float soma = 0;
    float media;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("\n Digite a nota do aluno %d no teste %d:\n", i + 1, j + 1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
        }

        media = soma / 2;

        if (media >= 6)
        {
            printf("\n O aluno esta aprovado com media %.2f \n", media);
        }
        else
        {
            printf("\n O aluno esta reprovado com media %.2f \n", media);
        }

        soma = soma * 0;
    }
    return 0;
}
