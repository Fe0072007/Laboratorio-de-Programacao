#include <stdio.h>
#include <string.h>

int main(){

    unsigned char conjunto[] = "A BCabc 0 12 $ * + /";

    for (short int i = 0; i < strlen(conjunto); i++){
        printf("%d ", conjunto[i]);
    }
}
