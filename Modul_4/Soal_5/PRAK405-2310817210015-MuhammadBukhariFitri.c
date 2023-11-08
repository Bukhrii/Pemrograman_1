#include <stdio.h>

int main(void) {
    int angka1, angka2, hasilPerkalian = 0, hasilLooping = 0;

    scanf("%d %d", &angka1, &angka2);
    for(int i = 1; i <= angka1; i++) {
        int perkalian = i * angka2;
        hasilPerkalian += perkalian;
        if(i > 1) {
            for(int j = i; j > 1; j--) {
                printf("(%d * %d) + ", j, angka2);
            }
            printf("(%d * %d) ", 1, angka2);
            printf("= %d\n", hasilPerkalian);
        }
        else if(i == 1) {
            printf("(%d * %d) ", i, angka2);
            printf("= %d\n", hasilPerkalian);
        }
        hasilLooping += hasilPerkalian;

    }
    printf("%d ", hasilLooping);

}