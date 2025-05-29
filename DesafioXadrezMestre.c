
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void moverTorre(int casas);
void moverRainha(int casas);


void moverTorre(int casas){
if(casas > 0){
printf("Direita..\n");
moverTorre(casas - 1);
printf("\n");
}


}


void moverRainha(int casas){
if(casas > 0){
printf("Esquerda..\n");
moverRainha(casas - 1);
}
}



int main() {

printf("TORRE:\n");
moverTorre(5);
printf("RAINHA:\n");
moverRainha(8);




return 0;
}