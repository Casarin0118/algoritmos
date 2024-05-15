#include <stdio.h>
int main()
{
    int numero = 100;
   


    printf("\n Os numeros pares de 0 ate 100 sao:\n", numero);
    for (int i = 0; i <= numero; i++)
   {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
   }

   






    return 0;
}