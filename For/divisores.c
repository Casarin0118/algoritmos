#include <stdio.h>
int main()
{
    int numero;
    printf("escreva um numero");
    scanf("%d", &numero);

    printf("Os divisores de %d que resultam em resto zero sao:\n", numero);
    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
