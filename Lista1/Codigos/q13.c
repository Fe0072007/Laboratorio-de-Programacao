#include <stdio.h>

int main(){

    double celsius;
    puts("Insira a temperatura em Celsius: ");

    scanf("%lf", &celsius);

    printf("%.2lf\n", (9 * celsius + 160)/5);

}