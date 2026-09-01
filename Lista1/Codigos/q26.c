#include <stdio.h>
#include <math.h>

int main(){

    double a,b,c = 0;

    puts("Insira 3 números (Ex.: 10 2 3): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("Média aritmética: %.2lf\n", (a+b+c)/3);
    printf("Média geométrica: %.2lf\n", pow((a*b*c), 1.0/3.0));

    
}