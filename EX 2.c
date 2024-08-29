#include <stdio.h>
#import <locale.h>
int main(){
    int num;
    printf("Digite um valor: ");
    scanf("%i",&num);

    if (num>=0) printf("positivo");
    else printf("negativo");


}
