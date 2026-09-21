#include <stdio.h>

int main(){

    float pi = 3.14159;
    float raio;
    puts("Insira o valor do raio: ");
    scanf("%f", &raio);

    printf("Diâmetro: %.2f, Circunferência: %.2f, Área: %.2f", (2 * raio), (2 * pi * raio), (pi * raio * raio));

}