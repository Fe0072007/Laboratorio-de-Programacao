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
        for(int j = i+1; j < N; j++){
            if(vetor[i] > vetor[j]){
                vetor[i] = vetor[i] ^ vetor[j];
                vetor[j] = vetor[i] ^ vetor[j];
                vetor[i] = vetor[i] ^ vetor[j]; 
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