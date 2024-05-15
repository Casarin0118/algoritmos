#include <stdio.h>

int main()
{
    float notas[5][3] = {
    {10, 5.5, 9} , 
    {2.5, 3.2, 6.8},
    {3.7, 19.8, 25.9},
    {7.5, 8.3, 7.4},
    {6.3, 1.5, 7.9}};

    for (int linha = 0; linha < 5; linha++)
    {
        printf("\nEstou na linha %d \n", linha);
    
    for (int coluna = 0; coluna < 3; coluna++)
    {
        printf("Notas: %.2f \n",notas[linha] [coluna]);
    }
    }

    return 0;
}
