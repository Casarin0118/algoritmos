#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[20];
    int pontos =0;
    int qtdejogadas = 0;
    int numero;

 for (int i = 0; i < 20; i++)
 {
     numeros[i] = rand() % 20;
 }

    printf("\n----jogo de adivinhar numero----\n");
    
    printf("\n quantas jogadas deseja fazer?");
    scanf("%d", &qtdejogadas);

  

    while (qtdejogadas > 0)
   {
     printf("\n qual o numero?");
     scanf("%d", &numero);

      for (int z = 0; z < 20; z++)
     {
    
            if (numero == numeros[z])
          {
             printf("\n voce acertou");
             pontos++;
             break;
          } 
            else 
            {

                if ( z == 19)
                {
                   pontos --;
                   printf("\n voce errou");
                }
            }
    
        }


     qtdejogadas--;

     printf("\n sua pontuacao atual e: %d", pontos);
   
    }
    
    printf("\n sua pontuacao final e: %d", pontos);
    return 0;
}