#include <stdio.h>
int main()
{
    int multiplicacao = 0;
    int numero = 0;

    printf("escreva um numero");
    scanf("%d", &numero);

    for (int i = 1; i <= 10; i++) {
    multiplicacao = numero * i;

    printf("\n %d", multiplicacao);
   
    }

    return 0;
}