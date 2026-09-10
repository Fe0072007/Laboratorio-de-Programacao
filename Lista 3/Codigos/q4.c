#include <stdio.h>
#include <stdlib.h>

unsigned char codify(unsigned char num){

    return num >> 4;

}

unsigned char decodify(unsigned char codifiedNum, unsigned char key){

    return (codifiedNum << 4) | key;

}

void printBinario8(unsigned char num) {
    for (int i = 7; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main(){

    unsigned char ctrl = 1;
    unsigned short int op;
    int n = 0;
    int sumErrors = 0;
    int error = 0;
    unsigned char value, codified, key, decodified;

    while(ctrl){
        puts("1 - Inserir nova amostra");
        puts("0 - Sair");
        scanf("%hu", &op);
        switch(op){
            case 1:
                n++;
                puts("Insira a amostra: ");
                scanf("%hhu", &value);
                
                codified = codify(value);

                key = (value << 4) >> 4;
                decodified = decodify(codified, key);

                printf("Valor: ");
                printBinario8(value);

                printf("Codificado: ");
                printBinario8(codified);

                printf("Decodificado: ");
                printBinario8(decodified);

                error = abs(value - decodified);
                printf("Erro de quantização: %d\n", error);

                sumErrors += error;
                break;
            case 0:
                ctrl = 0;
                break;
        }

    }

    printf("Erro médio: %d", sumErrors/n);

    return 0;
}