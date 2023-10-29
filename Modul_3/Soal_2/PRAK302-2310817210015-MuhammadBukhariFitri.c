#include <stdio.h>

int main(void) {
    int angka;
    scanf("%d", &angka);
    
    if(angka >= 80) {
        printf("A");
    }
    else if(angka >= 70 && angka <= 79) {
        printf("B");
    }
    else if(angka >= 60 && angka <= 69) {
        printf("C");
    }
    else if(angka >= 50 && angka <= 59) {
        printf("D");
    }
    else if(angka < 50) {
        printf("E");
    }


}