
#include <stdio.h>
#import <locale.h>
int main(){
    setlocale(0,"Portuguese");
    int atual,max,min,media;
    printf("Quantidade atual em estoque: ");
    fflush(stdin);
    scanf("%i",&atual);
    printf("Quantidade m�xima em estoque: ");
    fflush(stdin);
    scanf("%i",&max);
    printf("Quantidade m�nima em estoque: ");
    fflush(stdin);
    scanf("%i",&min);
    media = (max + min)/2;

    if (atual>=media) printf("N�o efetuar a compra");
    else printf("Efetuar a compra");
}
