#include <stdio.h>
int main()
{
    printf("---Calculo da nota do aluno---");
    int prova1;
    int prova2;

    printf("\n Digite a primeira nota inteira: ");
    scanf("%d", &prova1);
    printf("\n Digite a segunda nota número inteira: ");
    scanf("%d", &prova2);
    
    float soma = prova1 + prova2;
    float media = soma / 2;

    printf("\n a media do aluno é %.2f", media);

    return 0;
}
