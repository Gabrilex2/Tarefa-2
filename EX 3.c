
#include <stdio.h>
#import <locale.h>
int main(){
    int macas;
    float total;
    printf("Quantas maças deseja comprar? ");
    scanf("%i",&macas);
    total = macas*1.3;
    if (macas<12) {
            total = macas*1.3;
        printf("Custo total e de R$%.2f",total);
    }
    else{

        printf("Custo total e de R$%i",macas);
    }
}
