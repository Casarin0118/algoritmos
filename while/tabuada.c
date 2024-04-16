#include <stdio.h>
int main()
{
    int numerouser;
    int contador = 0;

    printf("digte um numero de 0 a 10 \n");
    scanf("%d", &numerouser);

   
    while (contador <= 11)
    {

      int resultado = numerouser * contador;
     

      printf("\n %d X %d = %d\n ", numerouser, contador, resultado);

      contador++;
    }
    
    

    return 0;
}
