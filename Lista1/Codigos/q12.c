#include <stdio.h>

int main(){
    
    unsigned char A, B;

    puts("Insira os valores de A e B (Ex: 4 8): ");

    scanf("%hhu %hhu", &A, &B);

    A = A ^ B;
    B = A ^ B;
    A = B ^ A;

    printf("A: %d, B: %d\n", (int)A, (int)B);

}