
//DESAFIO XADREZ MESTRE

//INCLUINDO BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//UTILIZANDO RECURSIVIDADE
void moverTorre(int casas);
void moverRainha(int casas);


void moverTorre(int casas){

if(casas > 0){
printf("Direita..\n");
moverTorre(casas  -1);
}
printf("\n");
}

void moverRainha(int casas){

if(casas > 0){
printf("Esquerda..\n");
moverRainha(casas - 1);
}
printf("\n");
}

//APRESENTANDO JOGO, DECLARANDO RECURSIVIDADE E MOVIMENTOS COM LOOPS ANINHADOS 
int main() {

printf("**JOGO XADREZ**\n");
printf("\n");
printf("MOVIMENTAÇÕES:\n");
printf("\n");

printf("TORRE:\n");
moverTorre(5);
printf("RAINHA:\n");
moverRainha(8);

//MOVIMENTO DO CAVALO UTILIZANDO LOOPS ANINHADOS FOR

printf("CAVALO:\n");
for(int j = 0; j < 1; j++){
for(int i = 0; i < 2; i++){
printf("Cima..\n");
}
printf("Direita..\n");
printf("\n");
}

//MOVIMENTO DO BISPO UTILIZANDO FOR

printf("BISPO:\n");
for(int k = 0; k < 2; k++){
printf("Cima,Direita..\n");
}

return 0;
}