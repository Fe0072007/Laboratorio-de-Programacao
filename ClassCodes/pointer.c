#include <stdio.h>

int main(){
    
    unsigned char x;
    unsigned char y;
    unsigned char res;

    unsigned char *px = 0x00;
    px = &x;
    *px = 10;

    unsigned char *py = &y;
    *py = 20;

    unsigned char *pres = &res;
    *pres = *px + *py;
    printf("%d\n", *pres);

}