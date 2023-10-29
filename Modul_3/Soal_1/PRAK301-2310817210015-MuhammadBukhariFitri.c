#include <stdio.h>

int main(void) {
    int angka1;
    int angka2;

    scanf("%d %d", &angka1, &angka2);
    if(angka1 > angka2) {
        printf("%d %d", angka2, angka1);
    }
    else{
        printf("%d %d", angka1, angka2);
    }
}