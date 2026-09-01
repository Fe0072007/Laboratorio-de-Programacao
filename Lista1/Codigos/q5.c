#include <stdio.h>

int main(){
    unsigned char sexo;
    double altura;
    puts("Insira seu sexo(M/F): ");
    scanf("%c", &sexo);

    switch (sexo){
        case 'M':
            puts("Insira sua altura: ");
            scanf("%lf", &altura);
            printf("%.2lf\n", 72.7 * altura -58);
            break;
        case 'F':
            puts("Insira sua altura: ");
            scanf("%lf", &altura);
            printf("%.2lf\n", 62.1 * altura -44.7);
            break;
        default:
            puts("Insira um valor válido");
    }
}