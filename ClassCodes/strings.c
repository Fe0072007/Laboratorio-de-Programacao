#include <stdio.h>
#include <string.h>

int main(){
    int cont = 0 ;
    char string[80];

    puts("Insira uma palavra: ");
    gets(string);

    printf("Strlen: %ld\n", strlen(string));

    while(string[cont] != '\0'){
        cont += 1;
    }

    printf("Implementado: %d\n", cont);


}