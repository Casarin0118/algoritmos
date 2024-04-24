#include <stdio.h>

int main()
{
    float notas[5]; 

    for (int i = 0; i < 5; i++) 
    {
        printf("\n Digite a nota %d:\n", i + 1);
        scanf("%f", &notas[i]);
    }

    float soma = 0; 

    for (int z = 0; z < 5; z++) 
    {
        soma += notas[z];
        printf("\n Nota %d = %.2f \n", z, notas[z]);
    }

    printf("\n A soma das notas e: %.2f \n", soma); 

    return 0;
}
