#include <stdio.h>

int main() {
    int linha = 0;

    while (linha < 9) {
        
        for (int col = 0; col < 9; col++) {
            if (linha == 0 || linha == 8 || col == 0 || col == 8) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("   ");
        for (int col = 0; col < 9; col++) {
            if ((linha == 0 || linha == 8) && (col >= 3 && col <= 5)) {
                printf("*");
            } else if ((linha == 1 || linha == 7) && (col == 1 || col == 7)) {
                printf("*");
            } else if ((linha >= 2 && linha <= 6) && (col == 0 || col == 8)) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("   ");
        for (int col = 0; col < 5; col++) {
            if (linha == 0 && col == 2) {
                printf("*");
            } else if (linha == 1 && (col >= 1 && col <= 3)) {
                printf("*");
            } else if (linha == 2) {
                printf("*");
            } else if (linha >= 3 && linha <= 8 && col == 2) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("   ");
        for (int col = 0; col < 9; col++) {
            if ((linha <= 4 && (col == 4 - linha || col == 4 + linha)) ||
                (linha > 4  && (col == linha - 4 || col == 12 - linha))) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
        linha++;
    }

    return 0;
}