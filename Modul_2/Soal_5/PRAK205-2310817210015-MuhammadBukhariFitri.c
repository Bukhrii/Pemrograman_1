#include <stdio.h>
#include <math.h>

int main() {
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);

    int tinggi = a;
    int sisiMiring = b;
    int alas = sqrt((sisiMiring * sisiMiring) - (tinggi * tinggi));
    int keliling = alas + tinggi + sisiMiring;
    int luas = (alas * tinggi) / 2;

    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm^2", luas);
}