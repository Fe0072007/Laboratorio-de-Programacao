#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIM 21
#define BASE -10
#define N 5

int main(){

    srand(time(NULL));
    int vetor[N];
    for(int k = 0; k < N; k++){
        vetor[k] = rand() % LIM + BASE;
    }
    puts("Vetor não ordenado: ");
    for(int l = 0; l < N; l++){
        printf("%d ", vetor[l]);
    }
    printf("\n");

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N-1; j++){
            if(vetor[j] > vetor[j+1]){
                vetor[j] = vetor[j] ^ vetor[j+1];
                vetor[j+1] = vetor[j] ^ vetor[j+1];
                vetor[j] = vetor[j] ^ vetor[j+1]; 
            }
        }
    }

    puts("Vetor ordenado: ");
    for(int m = 0; m < N; m++){
        printf("%d,", vetor[m]);
    }
    printf("\n");

    return 0;

}