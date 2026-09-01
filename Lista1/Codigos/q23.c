#include <stdio.h>

int main(){

    int x,n;

    puts("Insira o valor x e o valor n (Ex.: 5 1): ");
    scanf("%d %d", &x, &n);
    
    printf("%hhu", (char) x << n);

}