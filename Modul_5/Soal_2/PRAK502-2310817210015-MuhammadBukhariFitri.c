#include <stdio.h>
#include <math.h>

int hitung(int nilai1, int nilai2){
    //Lengkapi Function ini
    int hasil = nilai1 - nilai2;
    if(hasil < 0) {
        hasil *= -1;
    }
    return hasil;
}

int mutlak(int angka){
    //Lengkapi Function ini
    if(angka < 0) {
        return angka *= -1;
    }
}

int main()
{
    int a,b,c,d;

    scanf("%d",&a);
    scanf("%d",&c);
    scanf("%d",&b);
    scanf("%d",&d);
    int Hasil = hitung(a,b) + hitung(c,d);
    printf("%d",mutlak(Hasil));
    return 0;
}