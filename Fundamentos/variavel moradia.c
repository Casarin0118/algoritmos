#include <stdio.h>

int main()
{
    char numero[]= "840";
    char cep[] = "13426-215";
    char rua[] = "Joao da Cunha Raposo";
    char cidade[] = "Piracicaba";
    char Bairro[] = "Asturias";
    char estado[] = "Sao Paulo";
    char complemento[] = "portao marrom";


    printf("---Meus dados pessoais---");
    printf("\n numero da minha casa: %s", numero);
    printf("\n meu cep: %s", cep);
    printf("\n minha rua: %s", rua);
    printf("\n minha cidade: %s", cidade);
    printf("\n meu bairro: %s", Bairro);
    printf("\n meu estado: %s", estado);
    printf("\n complemento: %s", complemento);


    return 0;
}