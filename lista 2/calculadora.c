#include <stdio.h>
 int main()
 {
    char operacao;
    float numero1;
    float numero2;


    printf("\n fale o primeiro numero");
    scanf("%d", &numero1);
    printf("\n fale o segundo numero");
    scanf("%d", &numero2);

    printf("\n qual operacao voce precisa? (escreva em letra minuscula e sem acentuacao)");
    scanf("%s", &operacao);


    if (operacao = "soma")
    {
        float resultado1 = numero1 + numero2;
        printf("\n O resultado e: %.2f", resultado1);

    } else if (operacao = "subtracao")
    {
        float resultado2 = numero1 - numero2;
        printf("\n O resultado e: %.2f", resultado2);

    } else if (operacao = "divisao")
    {
        float resultado3 = numero1 / numero2;
        printf("\n O resultado e: %.2f", resultado3);

    } else if (operacao = "multiplicacao")
    {
        float resultado4 = numero1 * numero2;
        printf("\n O resultado e: %.2f", resultado4);
    }

    return 0;
 }
 