#include <stdio.h>

int main(void){
    float nilai1;
    float nilai2;
    printf("Masukkan Nilai Pertama: ");
    scanf("%g", &nilai1);
    printf("Masukkan Nilai Kedua: ");
    scanf("%f", &nilai2);
    
    float hasil = nilai1 + nilai2;
    printf("Hasil dari penjumlahan nilai pertama \"%g\" nilai kedua \"%.1f\" adalah \"%.2f\"", nilai1, nilai2, hasil);
}