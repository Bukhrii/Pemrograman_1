#include <stdio.h>

int main() {
    int ruangan, angka;

    scanf("%d", &ruangan);
    for(int i = 1; i <= ruangan; i++) {
        scanf("%d", &angka);
        angka *= i;
        printf("%d ", angka);
    }
}