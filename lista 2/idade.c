#include <stdio.h>

int main()
{

    int idade;

    printf ("\n Qual e sua idade?");
    scanf ("%d", &idade);

    if (idade >= 18)

    {
        printf("Parabens, voce e maior de idade");

    } 

    else

    {
        printf("\n Infelizmete (ou felizmente) voce ainda e menor de idade");
    }
    
    return 0;
}
