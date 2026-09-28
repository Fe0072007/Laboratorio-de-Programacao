#include <stdio.h>
#include <string.h>

#define TAM 10

int main(){
    int cont = 0 ;
    char string[TAM+1];

    puts("Insira uma palavra: ");
    // gets(string);
    fgets(string, TAM+1, stdin);

    printf("Nome: %s\n", string);

    printf("Strlen: %ld\n", strlen(string));

    while(string[cont] != '\0'){
        cont += 1;
    }

    printf("Implementado: %d\n", cont);


}