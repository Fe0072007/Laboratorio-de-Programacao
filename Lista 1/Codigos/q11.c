#include <stdio.h>

int main(){

    unsigned int x,y;

    puts("Insira os valores x e y (Ex.: 10 8):");
    scanf("%u %u", &x, &y);

    printf("Soma: %d, Diferença: %d, Produto: %d, Quociente: %.2lf, Resto: %d\n", x+y, x-y, x*y, (double)x/y, x % y);

}