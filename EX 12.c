
#include <stdio.h>
#import <locale.h>
int main(){
    setlocale(0,"Portuguese");
    float conta,saldo,debito,credito,total;
    printf("N�mero da conta: ");
    fflush(stdin);
    scanf("%f",&conta);
    printf("Seu saldo: R$ ");
    fflush(stdin);
    scanf("%f",&saldo);
    printf("D�bito: ");
    fflush(stdin);
    scanf("%f",&debito);
    printf("Cr�dito: ");
    fflush(stdin);
    scanf("%f",&credito);

    total = saldo - debito + credito;

    if (total>=0) printf("Seu saldo atual � de R$%.2f\nSaldo positivo",total);
    else printf("Seu saldo atual � de R$%.2f\nSaldo negativo",total);
}
