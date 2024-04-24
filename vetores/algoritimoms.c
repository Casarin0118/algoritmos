#include <stdio.h>
#include<stdlib.h>
int main()
{
    int numerosSorteados[60]; 
    int numeros[6];      
    int acertos = 0;
    
    for (int i = 0; i < 60; i++) {
        numerosSorteados[i] = rand() % 60;
    }

    // pede ao usuário que digite 6 números
    printf("Digite 6 numeros:\n");
    for (int z = 0; z < 6; z++) {
        scanf("%d", &numeros[z]);
    }

    // verifica quantos números o usuário acertou
    for (int x = 0; x < 6; x++) {
        if (numeros[x] >= 1 && numeros[x] <= 60 && numeros[x] == numerosSorteados[x]) {
            acertos++;
        }
    }

    // imprime a quantidade de acertos
    printf("Voce acertou %d numeros.\n", acertos);
    return 0;
}