#include <stdio.h>

int main(){

    //50,25 por dia
    // até 10 dias, sem gratificação
    // >10 <20 dias, 20%
    // >20, 30%
    // 10% do leão

    unsigned short int dias;
    double valor;

    puts("Insira o número de dias trabalhados:" );
    scanf("%d", &dias);

    if(dias <= 10)
        valor = (double) dias * 50.25;
    else if(dias < 20)
        valor = (double) (dias * 50.25) + (dias * 50.25) * 0.2;
    else
        valor = (double) (dias * 50.25) + (dias * 50.25) * 0.3;

    printf("%.2lf", valor - (valor * 0.1));

}