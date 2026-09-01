#include <stdio.h>

int main(){

    int num;

    puts("Insira um valor: ");
    scanf("%d", &num);

    switch(num % 2 == 0){
        case 1:
            puts("é ímpar");
            break;
        case 0:
            puts("é par");
            break;
    }

}