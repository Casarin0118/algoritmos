#include <stdio.h>

float calcular_total(float car[], int qtde)
{
   float total =0;
   for (int i = 0; i < qtde; i++)
   {
    total += car[i];

   }

   return total;
}

float calcular_desconto(float total, int pag)
{
    float desconto = 0;
    int vzs = 1;
    if (pag ==1)
      {
       desconto = total *0.10;

    }
    else if (pag ==2)
    {
      desconto = total * 0.05;

    }
    else if (pag ==3)
    {
      if (vzs <=3)
      {
      desconto = total *0.02;
      }
      vzs++;
    }

    return desconto;
}

int main()
{
    float carrinho [4];
    carrinho[0] = 297.99;
    carrinho[1] = 59.99;
    carrinho[2] = 1.99;
    carrinho[3] = 23.99;

    float total = calcular_total(carrinho, 4);
    float desc = calcular_desconto(total, 1); 

    printf("o valor total e\nR$ %.2f", total);
    printf("o desconto e\nR$ %.2f", desc);

    return 0;
}