#include <stdio.h>

int main()
{

    float altura;
    float peso;
    printf("\n Ola usuario, voce esta na calculadora de imc");
    printf("\n Qual e sua altura (em metros)?");
    scanf("%f", &altura);

    printf("\n Qual e seu peso(em quilos)");
    scanf("%f", &peso);

    float imc = peso / pow(altura, 2);

    if (imc < 18.5)
    {
        printf("o seu imc e: %.2f \n e voce esta abaixo do peso", imc);
    }
    else if (imc >= 18.5 && imc <= 24.9)
    {
        printf("o seu imc e: %.2f \n e voce esta no peso ideal", imc);
    }
    else if (imc >= 25 && imc <= 29.9)
    {
        printf("o seu imc e: %.2f \n e voce esta acima do peso", imc);
    }
    else if (imc >= 30 && imc < 35)
    {
        printf("o seu imc e: %.2f \n e voce esta na obesidade grau 1", imc);
    }
    else if (imc >= 35 && imc < 40)
    {
        printf("o seu imc e: %.2f \n e voce esta na obesidade grau 2", imc);
    }
    else if (imc >= 40)
    {
        printf("o seu imc e: %.2f \n e voce esta na obesidade grau 3", imc);
    }

    return 0;
}
