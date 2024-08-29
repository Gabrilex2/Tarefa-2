
#include <stdio.h>
#import <locale.h>
int main(){
    int n1,n2;
    printf("Valor 1: ");
    scanf("%i",&n1);
    printf("Valor 2: ");
    scanf("%i",&n2);

    if(n1>n2) printf("O valor 1 e maior que o valor 2");
    else printf("O valor 2 e maior que o valor 1");
}
