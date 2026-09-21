#include <stdio.h>

int main() {
    int numero, soma = 0, contador = 0;
    int parar = 0;

    while (!parar) {
        scanf("%d", &numero);

        if (numero == -1) {
            parar = 1;
        } else if (numero < 0) {
            /* nada a fazer, equivale ao continue */
        } else if (numero > 255) {
            /* nada a fazer, equivale ao continue */
        } else {
            soma += numero;
            contador++;
        }
    }

    printf("Soma = %d\n", soma);
    printf("Quantidade = %d\n", contador);

    return 0;
}