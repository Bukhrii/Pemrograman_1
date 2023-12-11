#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int matriksA[n][n], matriksB[n][n], matriksAXB[n][n];
    printf("Matriks A\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matriksA[i][j]);
        }
    }
    printf("Matriks B\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matriksB[i][j]);
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            matriksAXB[i][j] = 0;
            for(int k = 0; k < n; k++) {
                matriksAXB[i][j] += matriksA[i][k] * matriksB[k][j];
            }
        }
    }
    printf("Matriks AXB\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", matriksAXB[i][j]);
        }
        printf("\n");
    }
}