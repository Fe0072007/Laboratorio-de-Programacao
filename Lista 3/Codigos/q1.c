#include <stdio.h>

int main(){

    int aA, pA, vA = 0;
    int aB, pB, vB = 0;

    puts("Insira o objeto A: (a p v)");
    scanf("%d %d %d", &aA, &pA, &vA);

    puts("Insira o objeto B: (a p v)");
    scanf("%d %d %d", &aB, &pB, &vB);

    int aTot = aB - aA;
    int pTot = pB - pA;
    int vTot = vB - vA;

    if(aTot >= pTot && aTot >= vTot){
        printf("Distância: %d", aTot);
    }else if(pTot >= aTot && pTot >= vTot){
        printf("Distância: %d", pTot);
    }else if(vTot >= aTot && vTot >= pTot){
        printf("Distância: %d", vTot);
    }

}
