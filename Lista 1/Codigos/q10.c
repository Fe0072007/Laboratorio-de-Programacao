#include <stdio.h>

int main(){

    double valor, cotacao;

    puts("Insira o valor em real e a cotação (Ex.: 10 5.5)");
    scanf("%lf %lf", &valor, &cotacao);

    printf("%.2lf\n", valor/cotacao);

}