#include <stdio.h>
#include <string.h>

int main()
{
    int soma = 0;
    char parar[4];

    do
    {
        int numero;
        printf("\n Digite um numero \n");
        scanf("%d", &numero);
        soma += numero;

        printf("\n Voce quer continuar? \n");
        scanf("%s", parar);

    } while (strcmp(parar, "sim") == 0);
    printf("\n A soma dos numeros e: %d", soma);

    return 0;
}
