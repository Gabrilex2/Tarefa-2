
#include <stdio.h>
#import <locale.h>
int main(){
    int n1,n2;
    printf("Valor 1: ");
    scanf("%i",&n1);
    printf("Valor 2: ");
    scanf("%i",&n2);

    if (n1<n2) printf("%i %i",n1,n2);
    else printf("%i %i",n2,n1);
}
