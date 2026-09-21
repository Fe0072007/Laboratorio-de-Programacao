#include <stdio.h>

int main(){
    double valor;
    puts("Insira o valor da conta: ");
    scanf("%lf", &valor);

    printf("%.2f\n", valor + (valor * 0.1));

}