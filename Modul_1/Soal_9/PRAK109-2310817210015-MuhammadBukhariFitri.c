#include <stdio.h>

int main() {
    int pasukan = 958730;
    char *pahlawan[] = {"Zilong", "Ling", "Baxia", "Wanwan", "Chang'e"};
    int jumlahPahlawan = sizeof(pahlawan) / sizeof(pahlawan[0]);

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", pasukan);
    printf("Jumlah pahlawan = %d\n", jumlahPahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan", pasukan / jumlahPahlawan);

    return 0;
}