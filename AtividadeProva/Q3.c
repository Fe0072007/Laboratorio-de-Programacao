#include <stdio.h>
#define N 4

int main(){

    unsigned char pix, max, min;

    for(int i = 0; i <= N; i++){
        puts("Insira o pixel:");
        scanf("%hhu", &pix);

        if(i == 0){
            min = pix;
            max = pix; 
        }
        
        min = pix > min ? min : pix;
        max = pix > max ? pix : max;

    }
    printf("Min: %d\nMax: %d\n", min, max);
    int xNorm = 0;

    for(int j = 0; j <= N; j++){
        puts("Insira o valor a ser normalizado: ");
        scanf("%d", &xNorm);

        printf("%.2lf\n", (double) (xNorm - min)/(max - min));
    }

    return 0;

}