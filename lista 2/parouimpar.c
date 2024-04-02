#include <stdio.h>

int main()
{

   int numero;

   printf("\n Fale um numero");
   scanf("%d", &numero);

   if (numero % 2 == 0)
   {
    printf("\n Este numero e par");
   }
   else
   {
    printf("\n Este numero e impar");
   }
      
    return 0;
}
