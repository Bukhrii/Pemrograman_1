#include <stdio.h>

//Buatlah Function Disini
int MaxBilangan(int angka1, int angka2, int angka3, int angka4) {
    int max = angka1;

    if (angka2 > max) {
        max = angka2;
    }
    if (angka3 > max) {
        max = angka3;
    }
    if (angka4 > max) {
        max = angka4;
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hasil = MaxBilangan(a, b, c, d);
    printf("%d", hasil);
    return 0;
}