#include <stdio.h>
float calcular_media(float n1, float n2)
{
    float media = (n1 + n2) /2;
    return media;
}
int main()
{
    float nota1 = 6.7;
    float nota2 = 5.6;
    float med = calcular_media(nota1, nota2);
    printf("A media e: %.2f", med);
    return 0;
}

