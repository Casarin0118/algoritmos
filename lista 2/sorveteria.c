#include <stdio.h>

int main()
{
   int dinheiro;
   int tempo;
   
    printf("\n Voce tem dniheiro? (digite 1 para sim e 0 para nao)");
    scanf("%d", &dinheiro);
    printf("\n Esta chovendo? (digite 1 para sim e 0 para nao)");
    scanf("%d", &tempo);

    if (dinheiro == 1 && tempo == 0)
    {
        printf("\n Voce vai a sorveteria.");
    }
    else if (dinheiro == 0 && tempo == 0)
    {
        printf("\n Voce nao vai porque nao tem dinheiro.");
    }
    else if (dinheiro == 1 && tempo == 1)
    {
        printf("\n Voce nao vai pois esta chovendo.");
    }
    else if (dinheiro == 0 && tempo == 1)
    {
        printf("\n Voce nao vai pois esta chovendo e voce nao tem dinheiro.");
    }

    return 0;
}
