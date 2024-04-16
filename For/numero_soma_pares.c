#include <stdio.h>

int main()
{
    int soma2 = 0;
    int numero;
    printf("\n digite um numero");
    scanf("\n%d", &numero);
    

    for (int i = 0; i <= numero; i++)
    {
        if (i % 2 == 0)
        {
            soma2 += i;
            printf("\n %d", soma2); 
        }
        
    }
    

    




    return 0;
}
