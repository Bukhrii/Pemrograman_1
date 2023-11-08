#include <stdio.h>

int main(void) {
    int angka;
    scanf("%d", &angka);

    for(int i = 1; i <= angka; i++) {
        if(i % 2 != 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    for(int i = 1; i <= angka; angka--) {
        if(angka % 2 == 0) {
            printf("%d ", angka);
        }
    }
}