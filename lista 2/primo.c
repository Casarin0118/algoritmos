#include <stdio.h>
int main()
{
    
    int numero;
    printf("escreva um numero");
    scanf("%d", &numero);

    if (numero % numero == 0 && numero % 1 == 0 && numero % 2 != 0)
    {
        printf("\n este numero e primo");
    }
    else
    {
        printf("\n este numero nao e primo");
    }
    
    



    return 0;
}
