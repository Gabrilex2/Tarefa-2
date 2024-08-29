
#include <stdio.h>
#import <locale.h>
int main(){
    int ano,nascimento,idade;
    printf(" Ano atual: ");
    scanf("%i",&ano);
    printf(" Qual o seu ano de nascimento: ");
    scanf("%i",&nascimento);
    idade = ano - nascimento;
    if (idade>=18) printf(" voce pode votar esse ano");
    else printf(" voce nao pode votar esse ano");
}
