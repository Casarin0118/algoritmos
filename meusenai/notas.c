#include <stdio.h>

int main()
{
    int notas[5];
    int faltas[5];
    float pesos_notas[5] = {0.15, 0.15, 0.15, 0.25, 0.30};
    float nota_total = 0.0;
    int faltas_total = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite a nota para a tarefa %d: ", i + 1);
        scanf("%d", &notas[i]);

        printf("Digite o número de faltas para a tarefa %d: ", i + 1);
        scanf("%d", &faltas[i]);

        nota_total += notas[i] * pesos_notas[i];
        faltas_total += faltas[i];
    }

    float nota_final = nota_total / (1.0 - (float)faltas_total / 20.0);
    if (nota_final >= 6.0)
    {
        printf("\nO aluno está aprovado com a nota final de %.2f\n", nota_final);
    }
    else
    {
        printf("\nO aluno está reprovado com a nota final de %.2f\n", nota_final);
    }

    return 0;
}