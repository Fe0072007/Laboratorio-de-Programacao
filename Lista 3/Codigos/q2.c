#include <stdio.h>
#include <stdlib.h>

int chebyshevRange(int aA, int pA, int vA, int aB, int pB, int vB){

    int aTot = abs(aB - aA);
    int pTot = abs(pB - pA);
    int vTot = abs(vB - vA);

    if(aTot >= pTot && aTot >= vTot){
        return aTot;
    }else if(pTot >= aTot && pTot >= vTot){
        return pTot;
    }else if(vTot >= aTot && vTot >= pTot){
        return vTot;
    }

}

int main(){

    unsigned char ctrl = 1;
    unsigned short int op = 0;
    int aO, pO, vO;
    int C1a, C1p, C1v;
    int C2a, C2p, C2v;
    puts("Insira a Classe 1 (Ex.: a p v):");
    scanf("%d %d %d", &C1a, &C1p, &C1v);

    puts("Insira a Classe 2 (Ex.: a p v):");
    scanf("%d %d %d", &C2a, &C2p, &C2v);

    while(ctrl){
        puts("1 - Checar classificação");
        puts("0 - Sair");
        scanf("%hu", &op);

        switch(op){
            case 1:
                puts("Insira o objeto (Ex.: a p v): ");
                scanf("%d %d %d", &aO, &pO, &vO);

                int rangeC1 = chebyshevRange(C1a, C1p, C1v, aO, pO, vO);
                int rangeC2 = chebyshevRange(C2a, C2p, C2v, aO, pO, vO);

                if(rangeC1 < rangeC2){
                    puts("Classe C1");
                }else if(rangeC2 < rangeC1){
                    puts("Classe C2");
                }else{
                    puts("Empate");
                }
                break;
            case 0:
                ctrl = 0;
                break;
        }

    }

    return 0;
}

