#include <stdio.h>

int main(){
    unsigned int valor;
    puts("Insira um valor decimal: ");
    scanf("%d", &valor);

    printf("%X0\n", valor);
    printf("%#o\n", valor);
}