#include <stdio.h>

int main(){

    int valor;
    puts("Insira um valor inteiro: ");
    scanf("%d", &valor);

    printf("Sucessor: %d, Antecessor: %d\n", valor+1, valor-1);

}