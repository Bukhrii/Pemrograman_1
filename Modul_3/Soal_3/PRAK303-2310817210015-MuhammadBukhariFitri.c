#include <stdio.h>

int main(void) {
    int angka;
    scanf("%d", &angka);

    if(angka > 0) {
        printf("positif");
    }
    else if(angka == 0) {
        printf("nol");
    }
    else {
        printf("negatif");
    }
}