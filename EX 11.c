
#include <stdio.h>
#import <locale.h>
int main(){
    setlocale(0,"Portuguese");
    float salario,vendas,comissao,bonus,total;
    printf("Sal�rio fixo: R$ ");
    fflush(stdin);
    scanf("%f",&salario);
    printf("Valor das vendas efetuadas: R$ ");
    fflush(stdin);
    scanf("%f",&vendas);

    if (vendas<=1500)  {
            comissao = vendas*0.03;
            total = comissao + salario;
            printf("O sal�rio total � de R$%.2f",total);
    }

    else {
            comissao = vendas*0.03;
        bonus = vendas*0.05;
    total = bonus + comissao + salario; printf("O sal�rio total � de R$%.2f",total);
    }
}
