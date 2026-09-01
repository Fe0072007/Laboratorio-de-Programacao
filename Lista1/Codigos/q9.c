#include <stdio.h>

int main(){

    unsigned int comprimento, largura, altura;

    puts("Insira volume, largura e altura (Ex.: 10 5 7):");
    scanf("%u %u %u", &comprimento, &largura, &altura);

    printf("Volume: %d\n", comprimento * largura * altura);

}