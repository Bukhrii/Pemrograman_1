#include <stdio.h>

int main() {
    int sisiA = 4;
    int sisiB =  5;
    int sisiC = 7;
    int keliling = sisiA + sisiB + sisiC;
    int harga = 85000;
    int biaya = keliling * harga;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisiA, sisiB, sisiC);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", harga);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : %d\n", biaya);

    return 0;
}