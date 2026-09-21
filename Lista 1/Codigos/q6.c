#include <stdio.h>

int main(){
    unsigned int horas, min, seg;

    puts("Insira as horas, minutos e segundos (Ex.: 9 6 30): ");
    scanf("%u %u %u", &horas, &min, &seg);

    printf("Total em segundos: %d\n", (horas * 3600) + (min * 60) + seg);


}