#include <stdio.h>

int main(){

    int n, horas, minutos, segundos = 0;
    puts("Insira a quantidade de segundos: ");
    scanf("%d", &n);

    if(n >= 3600) {
        horas = n / 3600; 
        minutos = n % 3600 / 60; 
        segundos = (n % 3600) % 60;
    }else if (n >= 60){
        minutos = n / 60; 
        segundos = n % 60;
    }else {
        segundos = n;
    }

    printf("%dhrs : %dmin : %dseg", horas, minutos, segundos);

}