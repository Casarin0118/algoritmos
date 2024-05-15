#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    
    printf("Digite 9 numeros inteiros para preencher a matriz de 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Digite o elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int soma_linha[3] = {0};
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            soma_linha[i] += matriz[i][j];
        }
    }
    
   
    printf("\nSoma dos numeros por linha:\n");
    for(i = 0; i < 3; i++) {
        printf("Soma da linha %d: %d\n", i, soma_linha[i]);
    }
    
    return 0;
}