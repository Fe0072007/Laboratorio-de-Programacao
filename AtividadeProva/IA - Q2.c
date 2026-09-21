#include <stdio.h>

int main(void) {
    int n;
    double anterior, atual, proximo, y;

    scanf("%d", &n);

    if (n < 3) {          /* nao ha amostra com vizinho dos dois lados */
        return 0;
    }

    /* carrega as duas primeiras amostras: x1 e x2 */
    scanf("%lf", &anterior);
    scanf("%lf", &atual);

    /* a cada nova amostra lida, ja e possivel calcular um y */
    for (int i = 2; i <= n - 1; i++) {
        scanf("%lf", &proximo);

        y = (anterior + atual + proximo) / 3.0;
        printf("y[%d] = %.4lf\n", i, y);

        /* desliza a janela uma posicao a direita */
        anterior = atual;
        atual = proximo;
    }

    return 0;
}