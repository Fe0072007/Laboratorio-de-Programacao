#include <stdio.h>
#define N 10

int main(){

    int x1,x2,x3;

    for(int i = 0; i <= N; i++){
        printf("Insira a amostra %d:\n", i+1);
        x3 = x2;
        x2 = x1;
        scanf("%d", &x1);

        if(i >= 2)
            printf("y[%d]:%.2lf\n", i-1, (double) (x1 + x2 + x3)/3);
    }

    return 0;

}