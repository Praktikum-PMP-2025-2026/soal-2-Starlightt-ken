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

void batu_stabil(int hasil, int langkah, int n){
    if(n % 2 == 0){
        hasil = n/2;
        langkah++;
        n = hasil;
        if (hasil == 1) {
            printf("LANGKAH : %d", langkah);
            return;
        }

    } else if (n % 2 == 1){
        hasil = (3*n) + 1;
        langkah++;
        n = hasil;
        if (hasil == 1){
            printf("LANGKAH : %d", langkah);
            return;
        }
    }
    batu_stabil(hasil, langkah, n);
}
    
int main(){
    //meminta input banyak nomor dari user
    int T; 
    printf("Silahkan memasukan jumlah input : ");
    scanf("%d", &T);

    int n;
    int array[T]; 
    int hasil = 0; 
    int langkah = 0; 
    int LANGKAH = 0;

    //Perulangan untuk input tiap elemen dalam array 
    for(int i = 0; i < T; i++){
        printf("Silahkan memasukan nilai n: ");
        array[i] = scanf("%d", &n);
    }

    for(int i = 0; i < T; i++){
        batu_stabil(hasil, langkah, array[i]);
    }

    return 0; 

    
}
