#include <stdio.h>

int main()
{
   
  float nota1;
  float nota2;


 printf("\n Qual foi sua primeira nota?");
 scanf("%f", &nota1);
 printf("\n Qual foi sua segunda nota?");
 scanf("%f", &nota2);


  float media = (nota1 + nota2) / 2;


if (media >= 6.0)
{
    printf("\n Sua nota final foi: %.2f e voce esta aprovado!", media);
}
else
{
  printf("\n Sua nota final foi: %.2f e voce esta reprovado.", media);
}


    return 0;
}
