#include <stdio.h>
int main()
{
    float notas[3];

    for (int i = 0; i < 3; i++)
    {
        printf("\n Digite a nota:\n");
        scanf("%f", &notas[i]);
    }

     for (int z = 0; z < 3; z++)
    {
        printf("\n a nota e: %.2f \n", notas[z]);
        
    }
    return 0;


}