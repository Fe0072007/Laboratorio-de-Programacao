#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double chebyshevRange(double aA, double pA, double vA, double aB, double pB, double vB)
{

    double aTot = fabs(aB - aA);
    double pTot = fabs(pB - pA);
    double vTot = fabs(vB - vA);

    if (aTot >= pTot && aTot >= vTot)
    {
        return aTot;
    }
    else if (pTot >= aTot && pTot >= vTot)
    {
        return pTot;
    }
    else if (vTot >= aTot && vTot >= pTot)
    {
        return vTot;
    }
}
double manhattanRange(double aA, double pA, double vA, double aB, double pB, double vB)
{
    double aTot = fabs(aB - aA);
    double pTot = fabs(pB - pA);
    double vTot = fabs(vB - vA);

    return aTot + pTot + vTot;
}

double euclidianRange(double aA, double pA, double vA, double aB, double pB, double vB)
{
    double aTot = fabs(aB - aA);
    double pTot = fabs(pB - pA);
    double vTot = fabs(vB - vA);

    return sqrt(pow(aTot, 2) + pow(pTot, 2) + pow(vTot, 2));
}

int main()
{

    unsigned char ctrl = 1;
    unsigned short int op = 0;
    unsigned short int gt;
    double aO, pO, vO;
    double C1a, C1p, C1v;
    double C2a, C2p, C2v;

    int n = 0;
    int chebyshevCount = 0;
    int manhattanCount = 0;
    int euclidianCount = 0;
    int chebyshevResult, manhattanResult, euclidianResult;

    puts("Insira a Classe 1 (Ex.: a p v):");
    scanf("%lf %lf %lf", &C1a, &C1p, &C1v);

    puts("Insira a Classe 2 (Ex.: a p v):");
    scanf("%lf %lf %lf", &C2a, &C2p, &C2v);

    while (ctrl)
    {
        puts("1 - Checar classificação");
        puts("2 - Checar acurária");
        puts("0 - Sair");
        scanf("%hu", &op);

        switch (op)
        {
        case 1:
            n++;
            puts("Insira o GT: ");
            scanf("%hu", &gt);

            puts("Insira o objeto (Ex.: a p v): ");
            scanf("%lf %lf %lf", &aO, &pO, &vO);

            double chebyshevRangeC1 = chebyshevRange(C1a, C1p, C1v, aO, pO, vO);
            double chebyshevRangeC2 = chebyshevRange(C2a, C2p, C2v, aO, pO, vO);

            if (chebyshevRangeC1 < chebyshevRangeC2)
            {
                chebyshevResult = 1;
                printf("Chebyshev: %d\n", chebyshevResult);
            }
            else if (chebyshevRangeC2 < chebyshevRangeC1)
            {
                chebyshevResult = 2;
                printf("Chebyshev: %d\n", chebyshevResult);
            }
            else
            {
                chebyshevResult = 0;
                puts("Chebyshev: Empate");
            }

            chebyshevCount += chebyshevResult == gt ? 1 : 0;

            double manhattanRangeC1 = manhattanRange(C1a, C1p, C1v, aO, pO, vO);
            double manhattanRangeC2 = manhattanRange(C2a, C2p, C2v, aO, pO, vO);

            if (manhattanRangeC1 < manhattanRangeC2)
            {
                manhattanResult = 1;
                printf("Manhattan: %d\n", manhattanResult);

            }
            else if (manhattanRangeC2 < manhattanRangeC1)
            {
                manhattanResult = 2;
                printf("Manhattan: %d\n", manhattanResult);
            }
            else
            {
                manhattanResult = 0;
                puts("Manhattan: Empate");
            }

            manhattanCount += manhattanResult == gt ? 1 : 0;

            double euclidianRangeC1 = euclidianRange(C1a, C1p, C1v, aO, pO, vO);
            double euclidianRangeC2 = euclidianRange(C2a, C2p, C2v, aO, pO, vO);

            if (euclidianRangeC1 < euclidianRangeC2)
            {
                euclidianResult = 1;
                printf("Euclidiana: %d\n", euclidianResult);
            }
            else if (euclidianRangeC2 < euclidianRangeC1)
            {
                euclidianResult = 2;
                printf("Euclidiana: %d\n", euclidianResult);

            }
            else
            {
                euclidianResult = 0;
                puts("Euclidiana: Empate");
            }

            euclidianCount += euclidianResult == gt ? 1 : 0;

            break;
        case 2:
            if (n > 0)
            {
                printf("\nacuracia de Chebyshev: %.2lf%%\n", (double) chebyshevCount/n * 100);
                printf("acuracia de Manhattan: %.2lf%%\n", (double) manhattanCount/n * 100);
                printf("acuracia da Euclidiana: %.2lf%%\n", (double) euclidianCount/n * 100);
            }
            else
            {
                puts("\nNenhum objeto foi verificado ainda.");
            }
            break;
        case 0:
            ctrl = 0;
            break;
        }

    }

    return 0;

}