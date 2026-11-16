#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *alocarMemoria(const int);
void popularVetor(int* const, const int, const int);
void printVetor(const int* const, int);

int main(int argc, char** argv){

    srand(time(NULL));
    // arquivo <tamanho> <limite>

    printVetor(argv, argc);

    if(argc > 3){
        puts("Comando só precisa de dois argumentos");
    }

    int tam = atoi((*argv + (argc-2)));  
    int lim = atoi((*argv + (argc-1)));


    int* p = alocarMemoria(tam);

    popularVetor(p, tam, lim);

    printVetor(p, tam);

    int** par = malloc(sizeof(int*));
    if((par == NULL)) {

        puts("Memória insuficiente");
        exit(1);

    };

    for(int i = 0; i < tam; i++){

        if(*(p+i) % 2 == 0){
            *par = (p+i);
            break;
        }

    }
    puts("===== Primeiro Par =====");
    printf("[%p] = %d\n", *par, *(*par));

    free(p);
    free(par);

}

int* alocarMemoria(const int tam){

    int* p = NULL;

    if((p = malloc(tam * sizeof(int))) == NULL){
        puts("Memória insuficiente");
        exit(0);
    }

    return p;

}
void popularVetor(int* const p, int tam, int lim){

    for(int i = 0; i < tam; i++){

        *(p+i) = rand() % (lim+1);

    }

}
void printVetor(const int* const p, int tam){

    for(int i = 0; i < tam; i++){

        printf("[%p] = %d\n", (p+i), *(p+i));

    }

}

