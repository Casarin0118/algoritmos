#include <stdio.h>

int main() {
    int soma = 0;
    int i = 0;

    while (i <= 1000) {
        soma += i;
        i++;
    }

        printf("A soma dos numeros de 1 a 100 e: %d\n", soma);

    return 0;
}