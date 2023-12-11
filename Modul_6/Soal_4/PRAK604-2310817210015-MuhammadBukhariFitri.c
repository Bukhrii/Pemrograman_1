#include <stdio.h>
#include <string.h>

int main() {
    char kode[100], pesan[100];
    int tagar = 0, bintang = 0;

    scanf("%[^\n]%*c", &kode);
    scanf("%[^\n]%*c", &pesan);

    if(strlen(kode) != strlen(pesan)) {
        printf("Panjang kalimat berbeda, pesan palsu");
    }
    else {
        for(int i = 0; i < strlen(kode); i++) {
            if(kode[i] == ' ' && pesan[i] == ' ') {
                printf(" ");
            }
            else if(kode[i] != pesan[i]) {
                printf("#");
                tagar++;
            }
            else if(kode[i] == pesan[i]){
                printf("*");
                bintang++;
            }
        }
        printf("\n* = %d\n", bintang);
        printf("# = %d\n", tagar);
        if(bintang >= tagar) {
            printf("Pesan Asli");
        }
        else {
            printf("Pesan Palsu");
        }
    }
}