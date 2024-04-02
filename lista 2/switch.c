#include <stdio.h>

int main()
{
    int numeroMes;

    printf("\n Digite o numero do mes");
    scanf("%i", &numeroMes);

   switch (numeroMes)
   {
   case 1:
   printf("\n Estamos no mes de janeiro");
   break;
   case 2:
   printf("\n Estamos no mes de fevereiro");
   break;
   case 3:
   printf("\n Estamos no mes de março");
   break;
   case 4:
   printf("\n Estamos no mes de abril");
   break;
   case 5:
   printf("\n Estamos no mes de maio");
   break;
   case 6:
   printf("\n Estamos no mes de junho");
   break;
   default:
   printf("\n Mes invalido");
   break;
  }
    return 0;
}

