#include <stdio.h>

int main(void){
    char nama[TMP_MAX], nim[TMP_MAX], kelasParalel[TMP_MAX], ttl[TMP_MAX], alamat[TMP_MAX], hobby[TMP_MAX], noHp[TMP_MAX];

    printf("Nama\t\t\t: ");
    fgets(nama, sizeof(nama), stdin);
    printf("NIM\t\t\t: ");
    fgets(nim, sizeof(nim), stdin);
    printf("Kelas Paralel\t\t: ");
    fgets(kelasParalel, sizeof(kelasParalel), stdin);
    printf("Tempat/Tanggal Lahir\t: ");
    fgets(ttl, sizeof(ttl), stdin);
    printf("Alamat\t\t\t: ");
    fgets(alamat, sizeof(alamat), stdin);
    printf("Hobby\t\t\t: ");
    fgets(hobby, sizeof(hobby), stdin);
    printf("No.HP\t\t\t: ");
    fgets(noHp, sizeof(noHp), stdin);

    printf("Nama\t\t\t: %s", nama);
    printf("NIM\t\t\t: %s", nim);
    printf("Kelas Paralel\t\t: %s", kelasParalel);
    printf("Tempat/Tanggal Lahir\t: %s", ttl);
    printf("Alamat\t\t\t: %s", alamat);
    printf("Hobby\t\t\t: %s", hobby);
    printf("No.HP\t\t\t: %s", noHp);
}