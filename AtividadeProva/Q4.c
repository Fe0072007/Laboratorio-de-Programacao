#include <stdio.h>

int main(){

    int numero, soma = 0, contador = 0, ctrl = 1;

    while (ctrl){
        scanf("%d", &numero);

        if(numero == -1){
            ctrl = 0;
        }else if(numero < 0 || numero > 255){
            soma = soma;
        }else{
            soma += numero;
            contador ++;
        }
    }
    printf("Soma = %d\n", soma);
    printf("Quantidade = %d\n", contador);
    return 0;

}