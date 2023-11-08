#include <stdio.h>

int main(void) {
    int jmlMurid = 50, angka;
    char simbol;

    scanf("%d %c", &angka, &simbol);
    for(int i = 1; i <= jmlMurid; i++) {
        if(i == angka || i % angka == 0) {
            printf("%c ", simbol);
        }
        else {
            printf("%d ", i);
        }
    }
}