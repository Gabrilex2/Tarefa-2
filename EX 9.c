#include <stdio.h>
#import <locale.h>
int main(){
    int semanal = 40;
    int horas;
    float salario,extra,total;

    printf("Horas trabalhadas em um mes: ");
    scanf("%i",&horas);
    printf("Salario por hora: ");
    scanf("%f",&salario);

    if (horas>40){  extra = (horas-40)*salario*1.5;
                    total = (salario * 40) + extra;
        printf("O salário e de  RS%.2f",total);
    }
    else { total = salario * horas;
            printf("O salário e de RS%.2f",total);
    }

}
