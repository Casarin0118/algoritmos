#include <stdio.h>
int main()
{
    float numeros[10];

    for (int i = 0; i < 10; i++)
    {
        printf("\n Digite o numero:\n");
        scanf("%f", &numeros[i]);
    }

     for (int z = 9 ; z >= 0; z--)
    { 
        printf("\n O numero e: %.2f \n", numeros[z]);
         
    }
    return 0;


}