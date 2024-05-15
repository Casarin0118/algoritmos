#include <stdio.h>
#include<stdbool.h>
int main()
{
    char tabuleiro [3][3] ={
      {'_','_','_'},
      {'_','_','_'},
      {'_','_','_'},

    };

    bool houveganhador = false;
    char jogadoratual = 'x';
    int qtdedisponiveis = 9;
    int pe = 0; //posição valida até 9

  printf("\n---Jogo da velha---\n");

 do
 {
    printf("jogador %c \n", jogadoratual);
    printf("escolha a posicao de 1 a 9\n");
    scanf("%d", &pe);
    pe=pe-1;

    if (pe == 0 || pe == 1 || pe == 2)
    {
        tabuleiro[0][pe] = jogadoratual;
    }
    else if (pe == 3 || pe == 4 || pe == 5)
    {
        tabuleiro[1][pe-3] = jogadoratual;
    }
    else if(pe == 6 || pe == 7 || pe ==8)
    {
        tabuleiro[2][pe-6] = jogadoratual;
    }
    
   for (int row = 0; row < 3; row++)
   {
    for (int col = 0; col < 3; col++)
    {
        printf("%c", tabuleiro[row][col]);
    }
    printf("\n");
   }
   

   if (tabuleiro[0][0] == jogadoratual && tabuleiro[0][1] == jogadoratual &&tabuleiro[0][2] == jogadoratual)
   {
    houveganhador = true;
   }
   if (tabuleiro[1][0] == jogadoratual && tabuleiro[1][1] == jogadoratual &&tabuleiro[1][2] == jogadoratual)
   {
    houveganhador = true;
   }
   if (tabuleiro[2][0] == jogadoratual && tabuleiro[2][1] == jogadoratual &&tabuleiro[2][2] == jogadoratual)
   {
    houveganhador = true;
   }
   if (tabuleiro[0][0] == jogadoratual && tabuleiro[1][0] == jogadoratual &&tabuleiro[2][0] == jogadoratual)
   {
    houveganhador = true;
   }
   if (tabuleiro[1][0] == jogadoratual && tabuleiro[1][0] == jogadoratual &&tabuleiro[1][0] == jogadoratual)
   {
    houveganhador = true;
   }
   if (tabuleiro[0][1] == jogadoratual && tabuleiro[1][1] == jogadoratual &&tabuleiro[2][1] == jogadoratual)
   {
    houveganhador = true;
   }
   if (tabuleiro[0][2] == jogadoratual && tabuleiro[1][2] == jogadoratual &&tabuleiro[2][2] == jogadoratual)
   {
    houveganhador = true;
   }
   if (tabuleiro[0][0] == jogadoratual && tabuleiro[1][1] == jogadoratual &&tabuleiro[2][2] == jogadoratual)
   {
    houveganhador = true;
   }
   if (tabuleiro[0][2] == jogadoratual && tabuleiro[1][1] == jogadoratual &&tabuleiro[2][2] == jogadoratual)
   {
    houveganhador = true;
   }

   if (houveganhador == false)
   {
    if (jogadoratual == 'x')
    {
        
    }
    
   }
   

 } while (houveganhador = false && qtdedisponiveis > 0);

    return 0;
}
