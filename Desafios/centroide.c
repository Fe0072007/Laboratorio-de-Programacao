#include <stdio.h>

int main(){
    double soma_x = 0;
    double soma_y = 0;
    int n = 0;
    unsigned char ctrl = 1;
    while(ctrl){
        unsigned char op;
        puts("1 - Inserir mais um ponto");
        puts("2 - Parar");
        scanf("%hhu", &op);
        switch(op){
            case 1:
                int x,y;
                puts("Insira os pontos x e y separados por espaço: ");
                scanf("%d %d", &x , &y);
                n++;
                soma_x += x;
                soma_y += y;
                double centroide_x = soma_x/n;
                double centroide_y = soma_y/n;  
                printf("(%2f,%2f)\n", centroide_x, centroide_y);
                break;
            case 2:
                ctrl = 0;
                break;
            default:
                puts("Insira 1 ou 2");
        }
    }

}