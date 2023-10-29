#include <stdio.h>

int main(void) {
    int angka;
    scanf("%d", &angka);

    if (angka < 86400) {
    int jam = angka / 60 / 60;
    int detik = angka % 60;
    int menit = ((angka - detik) / 60) - jam * 60;
    printf("%02d:%02d:%02d", jam, menit, detik);
    }

    else {
    int hari = angka / 60 / 60 / 24;
    int detik = angka % 60;
    int jam = angka / 60 / 60 - hari * 24;
    int menit = ((angka - detik) / 60) - (jam + hari * 24) * 60;
    printf("%d hari %02d:%02d:%02d", hari, jam, menit, detik);
    }
}