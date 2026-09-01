#include <stdio.h>

int main(){
    double valor;
    puts("Insira um valor inteiro: ");
    scanf("%lf", &valor);

    printf("triplo: %.1f, quadrado: %.1f, meio: %.2f\n", 3*valor, valor * valor, valor/2);

}