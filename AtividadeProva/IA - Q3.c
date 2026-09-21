#include <stdio.h>

int main(void) {
    int n;
    int x, xmin, xmax;

    scanf("%d", &n);

    /* le a primeira intensidade para iniciar min e max */
    scanf("%d", &x);
    xmin = x;
    xmax = x;

    /* le as demais intensidades, atualizando min e max on the fly */
    for (int i = 2; i <= n; i++) {
        scanf("%d", &x);
        if (x < xmin) xmin = x;
        if (x > xmax) xmax = x;
    }

    /* le a intensidade a ser normalizada */
    int valor;
    scanf("%d", &valor);

    double normalizado = (double)(valor - xmin) / (xmax - xmin);

    printf("%.4lf\n", normalizado);

    return 0;
}