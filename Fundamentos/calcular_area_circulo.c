#include <stdio.h>

int main()
{
    printf("\nCalculadora de Areas");

    /*declaração de variável*/
   
    float raio = 0;
    
    printf("\nQual e o tamanho do raio do circulo?");


    /*Processamento */


    scanf("%f", &raio);

    float area = 3.14 *(raio * raio); 

    /*saída*/

    printf("\nA area do quadrado e: %.2f", area);

    return 0;
}
