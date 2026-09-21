#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define LIM 11

int main(){
    // Geração de vetor aleatório
    srand(time(NULL));
    int vetor[N];
    for(int k = 0; k < N; k++){
        vetor[k] = rand() % LIM;
    }
    // Ordenação por seleção do vetor
    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            if(vetor[i] > vetor[j]){
                vetor[i] = vetor[i] ^ vetor[j];
                vetor[j] = vetor[i] ^ vetor[j];
                vetor[i] = vetor[i] ^ vetor[j]; 
            }
        }
    }
    // Impressão do vetor
    for(int l = 0; l < N; l++){
        printf("%d ", vetor[l]);
    }
    // Mediana de acordo com o tamanho do vetor
    if(N % 2 == 0) 
        printf("\nMediana: %2.f", (float) (((vetor[N/2-1]) + vetor[N/2]))/2);
    else
        printf("\nMediana: %d", vetor[N/2]);

}

