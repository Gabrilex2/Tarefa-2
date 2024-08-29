
#include <stdio.h>
#import <locale.h>
int main(){
    int cmc,fim,tempo;
    printf("Hora do começo do jogo: ");
    scanf("%i",&cmc);
    printf("Hora do fim do jogo: ");
    scanf("%i",&fim);
    tempo = fim - cmc;
    if (cmc>fim) {tempo += 24; printf("O jogo durou %i horas",tempo);}
    else printf("O jogo durou %i horas",tempo);
}
