#include <stdio.h>

int main() {
    int soma = 0; 

    for (int i = 0; i <= 100; i++) {
        soma += i; 

        printf("\n A soma e: %d", soma);
    }
    
    return 0;
}
