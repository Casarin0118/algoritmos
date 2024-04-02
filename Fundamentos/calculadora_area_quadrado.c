#include <stdio.h>

int main()
{
    printf("\nCalculadora de Areas");

    /*declaração de variável*/
   
    float lado = 0;
    
    printf("\nQual e o tamanho do lado do quadrado?");


    /*Processamento */


    scanf("%f", &lado);

    float area = lado * lado;

    /*saída*/

    printf("\nA area do quadrado e: %.2f", area);

    return 0;
}



 
