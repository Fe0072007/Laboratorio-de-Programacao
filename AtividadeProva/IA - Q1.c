#include <stdio.h>

int main(void) {
    int R, G, B, M;

    scanf("%d %d %d", &R, &G, &B);
    scanf("%d", &M);

    /* extrai os bits 2, 1 e 0 de M */
    int b2 = (M >> 2) & 1;
    int b1 = (M >> 1) & 1;
    int b0 = (M >> 0) & 1;

    /* zera o bit menos significativo e insere o bit da mensagem */
    R = (R & 0xFE) | b2;
    G = (G & 0xFE) | b1;
    B = (B & 0xFE) | b0;

    printf("%d %d %d\n", R, G, B);

    return 0;
}