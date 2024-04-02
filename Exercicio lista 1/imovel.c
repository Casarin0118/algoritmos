#include <stdio.h>

int main()
{

    //declaração de variaveis
    int parcelas;
    float valorImovel;

    printf("\n Bem vindo a bv financeira!");

    //perguntas

    printf("\n Qual e o valor do imovel?");
    scanf("%f", &valorImovel);


    printf("\n Quantas parcelas voce quer pagar?");
    scanf("%d", &parcelas);
   
   //processamento

   if (parcelas >= 12)
   {
    float valorcomjuros = (valorImovel * 0.1) + valorImovel;
    float parcelacomjuros = valorcomjuros / parcelas;
    printf("\n O valor das parcelas e de: %.2f", parcelacomjuros);
   } else
   {
     float valorParcelas = valorImovel / parcelas;
    printf("\n O valor das parcelas e de: %.2f", valorParcelas);
   }

    return 0;
}