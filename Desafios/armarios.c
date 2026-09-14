#include <stdio.h>
#include <stdlib.h>

int main(){
    
    unsigned char armarios = 0x00; // 8 bits = 8 armarios
    unsigned char ctrl = 1;
    unsigned char op;

    while(ctrl){
        unsigned char lib = 0x01;
        unsigned short int pos = rand() % 8;
        puts("1 - Ocupar armário.");
        puts("2 - Liberar armário.");
        puts("3 - Sair");

        scanf("%hhu", &op);

        switch(op){
            case 1:
                lib = lib << pos;
                armarios += lib;
                printf("%hhu\n", armarios);
                break;

            case 2:
                puts("Insira a posição (0 - 7): ");
                scanf("%hd", &pos);

                lib = lib << (pos - 1);
                armarios = armarios ^ lib;
                printf("%hhu\n", armarios);
                break;
            case 3:
                ctrl = 0;
                break;
        }

    }

    return 0;
}