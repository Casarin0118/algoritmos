#include <stdio.h>

int main()
{
   
  float nota1;
  float nota2;
  int falta;

 printf("\n Qual foi sua primeira nota?");
 scanf("%f", &nota1);
 printf("\n Qual foi sua segunda nota?");
 scanf("%f", &nota2);
 printf("\n Quantas faltas voce tem?");
 scanf("%d", &falta);

  float media = (nota1 + nota2) / 2;

if (media >= 6.0 && falta <= 4)
{
 
 printf("\n Parabens, voce foi aprovado! Sua nota final e de: %.2f", media);
  
}
else if (media < 6 && falta <= 4)
{
  printf("\n Voce esta de recuperação com nota final de %.2f", media);
}
else if (media >= 6 && falta > 4)
{
  printf("\n Voce esta reprovado por faltas, sua nota final e de: %.2f", media);
}
    return 0;
}
