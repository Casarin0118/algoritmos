#include <stdio.h>

int main()
{

    //declaração de variaveis
    
    float altura;
    float peso;
    


    //Pergunta do começo

    printf("\n Ola usuario, voce esta na calculadora de imc");
    printf("\n Qual e sua altura (em metros)?");
    scanf("%f", &altura);
    
    printf("\n Qual e seu peso(em quilos)");
    scanf("%f", &peso);


   //processamento

   float imc = peso / pow(altura, 2);


   //saida de dados

   printf("o seu imc e: %.2f", imc);
   

    return 0;
}
