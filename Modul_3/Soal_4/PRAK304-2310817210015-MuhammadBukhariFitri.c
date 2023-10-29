#include <stdio.h>

int main(void) {
    int angka;
    scanf("%d", &angka);

    if(angka == 0) {
        printf("Nol");
    }
    else if(angka < 10) {
        printf("Satuan");
    }
    else if(angka < 20) {
        printf("Belasan");
    }
    else if(angka < 100) {
        printf("Puluhan");
    }
    else if(angka >= 100) {
        printf("Anda Menginput Melebihi Limit Bilangan");
    }
}