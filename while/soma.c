#include <stdio.h>
int main() {
    int soma = 0;
    int i = 1;

    while (i <= 50) {
        if ( i % 2 == 0)
        {
            soma += i;
        }
        
        i++;
    }

        printf("a soma dos numero pares de 1 ate 50 e: %d\n", soma);

    return 0;
}