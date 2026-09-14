#include <stdio.h>

int main(){

    int R,G,B,M;

    scanf("%d %d %d", &R, &G, &B);
    scanf("%d", &M);

    int b2 = (M>>2)&1;
    int b1 = (M>>1)&1;
    int b0 = M&1;

    printf("R: %d\n",(R&254)|b2);
    printf("G: %d\n",(G&254)|b1);
    printf("B: %d\n",(B&254)|b0);


    return 0;

}