#include <stdio.h>
#include <string.h>

int main(){

    int num;
    unsigned char str_num[] = "";

    puts("Insira um número: ");

    scanf("%d", &num);

    for(int i = sprintf(str_num,"%d", num)-1; i > -1; i--){
        printf("%c", str_num[i]);
    }

}