#include <stdio.h>

int main() {
    float phi = 3.14;
    int putaran = 5;
    int jarak = 14;
    float keliling = (float) jarak / putaran;
    float jariJari = keliling / (2 * phi);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n\n", jarak);
    printf("Jawaban : ");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", jariJari);

    return 0;
}