#include <stdio.h>

int main()
{
    int numeroMes;

    printf("\n Digite o numero do mes");
    scanf("%i", &numeroMes);

    if ( numeroMes == 1)
    {
        printf("\n Estamos no mes de janeiro, com muito calor");
    }
       else if ( numeroMes == 2)
    {
        printf("\n Estamos no mes de fevereiro, com feriado");
    }
      else if ( numeroMes == 3)
    {
        printf("\n Estamos no mes de março, com um pouco de frio");
    }
      else if ( numeroMes == 4)
    {
        printf("\n Estamos no mes de abril, com a pascoa");
    }
      else if ( numeroMes == 5)
    {
        printf("\n Estamos no mes de maio, chegando a festa junina");
    }
      else if ( numeroMes == 6)
    {
        printf("\n Estamos no mes de junho, finalmente com as festas juninas e frio");
    }
      else if ( numeroMes >= 13)
    {
        printf("\n mes invalido");
    }
       
    return 0;
}