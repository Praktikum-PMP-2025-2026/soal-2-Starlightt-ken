/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 01 - Overview of C Languange
 *   Hari dan Tanggal    : Rabu, 15 April 
 *   Nama (NIM)          : 133224088
 *   Nama File           : soal2.c
 *   Deskripsi           : Membuat program untuk melihat jumlah langkah yang dibutuhkan untuk melompat di batu dengan stabil. Dihasilkan langkah berdasarkan nilai dari input user
 * 
 */

//soal 2 : Kode Batu stabil 

#include <stdio.h> 

int batu_stabil(int langkah, int n){
    // printf("%d, %d", n, langkah);
    
    if (n == 1) {
        return langkah;
    }
    else if(n % 2 == 0){
        n = n/2;
        langkah++;
        return batu_stabil(langkah, n);

    } else if (n % 2 != 0){
        n = (3*n) + 1;
        langkah++;
        return batu_stabil(langkah, n);
    }
}
    
int main(){
    //meminta input banyak nomor dari user
    int T; 
    scanf("%d", &T);

    int n;
    int array[T]; 

    //Perulangan untuk input tiap elemen dalam array 
    for(int i = 0; i < T; i++){
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < T; i++){
        printf("LANGKAH %d\n", batu_stabil(0, array[i]));
    }

    return 0; 

    
}
