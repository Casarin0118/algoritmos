#include <stdio.h>
float calcular_media(float n1, float n2)
{
    float media = (n1 + n2) /2;
    return media;
}

void imprimir (float media)
{
  printf("a media e: %2.f", media);
}

int main()
{
    float nota1;
    float nota2;
   
    printf("Qual e a nota 1?");
    scanf("%f", &nota1);
    printf("qual e a nota 2?");
    scanf("%f", &nota2);

    float media = calcular_media(nota1, nota2);

    imprimir(media);
    return 0;
}

