/*
Exemplo de algoritmo com declaração de váriaveis em c
*/

#include <stdio.h>

int main()
{
    int idade = 16;
    float altura = 1.70;
    char *letra = "P";
    char nome[] = "Pedro";
    
    printf("---Meus dados pessoais---");
    printf("\n Meu nome: %s", nome);
    printf("\n minha idade: %d", idade);
    printf("\n minha letra: %s", letra);
    printf("\n Altura: %.2f", altura);
    return 0;
}



