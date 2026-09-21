#include <stdio.h>

int main(){

    signed char num;// 5 = 00000101 C1 = 11111010 C2(-1) = 10011100
    puts("Insira o valor: ");
    scanf("%hhu", &num);    
    signed char mask = num >> 7; // mask = 10011100 >> 7 = 00000001
    printf("Módulo: %hhu\n", (num ^ mask) - mask);

}