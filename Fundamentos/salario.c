#include <stdio.h>

int main()
{
    printf("\n Parabens, voce ganhou um aumento!");
    
    
    // definindo variáves


    float aumento = 0.12;
    float salario;

    //perguntas

    printf("\n Qual e o seu salario atual?");
    scanf("%f", &salario);

    //processamento
    
    float aumento2 = salario * aumento;
    float salarionovo = aumento2 + salario;

    // saída

    printf("\n Seu novo salario e de: %.2f", salarionovo); 


    return 0;
}
