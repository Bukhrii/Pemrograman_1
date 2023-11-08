#include <stdio.h> 

int main(void) {

    while(1) {
        printf("Pilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\nMasukkan Pilihan : ");
        float pilihan, nilaiPertama, nilaiKedua, hasil;
        scanf("%f", &pilihan);
        if (pilihan == 1 || pilihan == 2 || pilihan == 3 || pilihan == 4) {
            printf("Masukkan Nilai Pertama : ");
            scanf("%f", &nilaiPertama);
            printf("Masukkan Nilai Kedua : ");
            scanf("%f", &nilaiKedua);

            if(pilihan == 1) {
                hasil = nilaiPertama + nilaiKedua;
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", nilaiPertama, nilaiKedua, hasil);
            }
            else if(pilihan == 2) {
                hasil = nilaiPertama - nilaiKedua;
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", nilaiPertama, nilaiKedua, hasil);
            }
            else if(pilihan == 3) {
                hasil = nilaiPertama * nilaiKedua;
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n\n", nilaiPertama, nilaiKedua, hasil);
            }
            else if(pilihan == 4) {
                hasil = nilaiPertama / nilaiKedua;
                printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n\n", nilaiPertama, nilaiKedua, hasil);
            }
        }
        else if(pilihan == 5) {
                printf("Terimakasih, telah menggunakan kalkulator Muhammad Bukhari Fitri");
                break;
        }
        else {
            printf("Input anda salah, silahkan coba lagi\n\n");
        }
    }
}