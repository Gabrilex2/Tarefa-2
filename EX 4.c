
#include <stdio.h>
#import <locale.h>
int main(){
    float n1,n2,media;
    printf(" Nota 1: ");
    scanf("%f",&n1);
    printf(" Nota 2: ");
    scanf("%f",&n2);
    media = (n1+n2)/2;

    if (media>=7) printf(" A sua media foi de %.2f.\n A sua situação e: Aprovado",media);
    else printf(" A sua media foi de %.2f.\n A sua situação e: Reprovado",media);
}
