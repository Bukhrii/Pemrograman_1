#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int angka1[n1], angka2[n2];
    if(n1 == n2) {
        for(int i = 0; i < n1; i++) {
            scanf("%d", &angka1[i]);
        }
        for(int i = 0; i < n2; i++) {
                scanf("%d", &angka2[i]);
                printf("%d ", angka1[i] * angka2[i]);
        }        
    }
    else {
        printf("Jumlah tidak sama");
    }
}