#include<stdio.h>



void mostra_mensagem(int idade)
{
   if (idade < 18)
   {
    printf("Estude jovem\n");
   }
   else if (idade >= 18 && idade < 26)
   {
    printf("Voce esta na faculdade\n");
   }
   else if (idade >= 26 && idade > 40)
   {
    printf("Trabalhe muito \n");
   }
   else if (idade >= 40 && idade < 65)
   {
     printf("Trabalhe pouco \n");
   }
   else if (idade > 65)
   {
    printf("Aproveite a vida!\n");
   }
}


int calcular_idade(int ano_nascimento, int ano_atual)
{
  int idade = ano_atual - ano_nascimento;
  return idade;
}

void calcular_dias(int idade)
{
  int dias_vividos = idade * 365;
  printf("Voce ja viveu %d dias\n", dias_vividos);
  int horas_vividas = dias_vividos *24;
  printf("%d horas\n", horas_vividas);
  int minutos_vividos = horas_vividas * 60;
  printf("%d minutos\n", minutos_vividos);
}

int main()
{
    int ano_nascimento = 2007;
    int ano_atual = 2024;
    int idade = calcular_idade(ano_nascimento, ano_atual);
    printf("A idade da pessoa e: %d\n", calcular_idade(ano_nascimento, ano_atual));

    mostra_mensagem(idade);

    calcular_dias(idade);
    return 0;
}


