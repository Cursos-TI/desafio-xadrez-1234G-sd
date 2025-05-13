//DESAFIO XADREZ NIVEL AVENTUREIRO

#include <stdio.h>

int main() {

int i = 0;
int MovimentoCompleto = 1;


printf("***JOGO DE XADREZ***");
printf("\n     \n");

printf("MOVIMENTAÇÕES...\n");
printf("\n     \n");

printf("TORRE:\n");

//MOVIMENTAÇÃO DA TORRE UTILIZANDO WHILE

while (i < 5)
{
printf("Direita\n");
i++;
}
printf("\n     \n");

//MOVIMENTAÇÃO DO BISPO UTILIZANDO FOR

printf("BISPO:\n");

for ( i = 0; i < 2; i++)
{
printf("Cima,Dreita\n");
}

printf("\n     \n");

//MOVIMENTAÇÃO DA RAINHA UTILIZANDO DO-WHILE

printf("RAINHA:\n");

do
{
printf("Esquerda\n");
 i++;
} while (i <= 9);

printf("\n     \n");


//MOVIMENTAÇÃO DO CAVALO UTILIZANDO LOOPS ANINHADOS (WHILE E FOR)

printf("CAVALO:\n");

while (MovimentoCompleto--)
{
  for ( int i = 0; i < 2; i++)
  {
printf("Cima\n");
  }
  
printf("Direita");
}



return 0;
 }