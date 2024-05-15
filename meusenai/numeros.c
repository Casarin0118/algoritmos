#include <stdio.h>
int main()
{
    float notas [3];
    int soma;
    int multiplicacao;
    int media;

    printf("digite a nota 1\n", notas[0]);
    scanf("%f", &notas[0]);
    printf("digite a nota 2\n", notas[1]);
    scanf("%f", &notas[1]);
    printf("digite a nota 3\n", notas[2]);
    scanf("%f", &notas[2]);
 
    soma = notas[0] + notas [1] + notas [2];
    multiplicacao = notas [0] * notas [1] * notas[2];
    media = soma / 3;








    printf("\n a soma das notas e = %d \n a multiplicacao e = %d \n a media e = %d", soma, multiplicacao, media);
   


    return 0;
}
