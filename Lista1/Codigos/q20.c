#include <stdio.h>

int main(){

    int x, y;

    puts("Insira 2 números (Ex.: 1 2): ");
    scanf("%d %d", &x, &y);
    puts((x % y == 0) ? "multiplo" : "não multiplo");

}