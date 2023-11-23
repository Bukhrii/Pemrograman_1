#include <stdio.h>
int reverse(int angka){
    // Lengkapi Function ini
    int reverse = 0, sisa;
    while(angka != 0) {
        sisa = angka % 10;
        reverse = reverse * 10 + sisa;
        angka /= 10;
    }
    return reverse;
}

int main() {
    int A, B;
    scanf("%d %d",&A,&B);
    A=reverse(A);
    B=reverse(B);
    int C = A+B;
    printf("%d",reverse(C));
}
