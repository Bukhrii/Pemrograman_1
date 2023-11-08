#include <stdio.h>

int main(void) {
    int angka1, angka2;

    scanf("%d %d", &angka1, &angka2);
    printf("%d %d", angka1, angka2);

    if(angka1 < angka2) {
        for(int i = 1; i <= angka2 - angka1; i++) {
            printf(" - %d %d", angka1 + i, angka2 - i);
        }
    }
    else {
        for(int i = 1; i <= angka1 - angka2; i++) {
            printf(" - %d %d", angka1 - i, angka2 + i);
        }
    }
}