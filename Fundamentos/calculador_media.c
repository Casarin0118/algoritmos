#include <stdio.h>

int main()
{

    float litragem;
    float km;
    float valorgasolina = 4.80;
    float valoretanol = 3.80;

    //pergunta


    printf("\n Calculadora de media de combustivel");

    printf("\n quanto foi gasto do tanque?");
    scanf("%f", &litragem);

    printf("\n quantos km foi a viagem?");
    scanf("%f", &km);

   

   //processamento
   float media = km / litragem;
   float gasto1 = valorgasolina * litragem;
   float gasto2 = valoretanol * litragem;

   //saída de dados

   printf("\n A media em km/l e de: %.2f", media);
   printf("\n O valor gasto na gasolina e de: %.2f", gasto1);
   printf("\n O valor gasto no etano e de: %.2f", gasto2);

    return 0;
}
