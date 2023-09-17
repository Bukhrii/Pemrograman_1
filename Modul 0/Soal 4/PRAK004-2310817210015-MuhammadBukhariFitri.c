#include <stdio.h>
     
int main() {
    char tagar[] = "#                            #";
    int i;
    char namaLengkap[] = "Muhammad Bukhari Fitri";
    long long int nim = 2310817210015LL;
    int barisAwal = 1;
    int jmlBaris = 6;
    for(i = barisAwal; i <= jmlBaris; ++i) {
        
        
        if ( i == jmlBaris/2 ) {
            printf("#   %s   #", namaLengkap);
        }

        else if ( i == jmlBaris/2+1 ) {
             printf("#       %lld        #", nim);
        }
        else if (i == barisAwal || i == jmlBaris) {
            printf("##############################");
        }
        else{
            printf("%s", tagar);
        }
      printf("\n");
    }
}