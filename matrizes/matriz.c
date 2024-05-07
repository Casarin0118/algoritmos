#include <stdio.h>


int main()
{
    int numeros [3][3] = {
    {12, 29, 55} , 
    {25, 32, 68},
    {37, 198, 259}};


    //printf("Numero: %d \n", numeros[0][1]);
    //printf("Numero; %d \n",numeros [2][1] );


    for (int linha = 0; linha < 3; linha++)
    {
        printf("\nEstou na linha %d \n", linha);
    
    for (int coluna = 0; coluna < 3; coluna++)
    {
        printf("Valores: %d \n",numeros[linha] [coluna]);
    }
    }

}
