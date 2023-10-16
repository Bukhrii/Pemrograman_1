#include <stdio.h>

int main() {
    float jariJari;
    float tinggi;
    float phi = 22.0 / 7.0;
    scanf("%f", &jariJari);
    scanf("%f", &tinggi);

    float volume = phi * jariJari * jariJari * tinggi;
    float luas = 2 * phi * jariJari * (jariJari + tinggi);
    float keliling = 2 * phi * jariJari;

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f", keliling);
}