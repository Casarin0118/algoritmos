#include <stdio.h>
#include <windows.h>

int main()
{
    int notas[5];
    int faltas;
    float pesos_notas[5] = {0.15, 0.15, 0.15, 0.25, 0.30};
    float nota_total = 0.0;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite a nota para a tarefa %d: ", i + 1);
        scanf("%d", &notas[i]);

        nota_total += notas[i] * pesos_notas[i];

    }
    printf("Quantas faltas ao todo voce teve? \n");
    scanf("%d", &faltas);

    float nota_final = nota_total / 5;

    if (faltas > 3)
    {
        printf("Reprovado por faltas");
        

    
    }else
    {
       if (nota_final >= 6.0)
    {
        printf("\nO aluno está aprovado com a nota final de %.2f\n", nota_final);
    }
    else
    {
        printf("\nO aluno está reprovado com a nota final de %.2f\n", nota_final);
    }
    }
    
    
    

    return 0;
}