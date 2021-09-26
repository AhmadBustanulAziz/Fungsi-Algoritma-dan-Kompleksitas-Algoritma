/*
Nama      : Ahmad Bustanul Aziz
NIM       : 24060118120022
Matkul    : Analisis dan Strategi Algoritma
Tanggal   : 9 September 2021
Deskripsi : Program untuk menentukan bahwa 2 kata merupakan
            kata yang sama atau bukan
*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    //Kamus Global
    char S1[100], S2[100];
    int jumlahS1, jumlahS2, i, j;
    bool Hasil;

    //Algoritma
    cin >> S1;  //Kata pertama
    cin >> S2;  //Kata kedua

    jumlahS1 = strlen(S1);  //Jumlah Kata pertama
    jumlahS2 = strlen(S2);  //Jumlah Kata kedua

    for (i=0; i<jumlahS1; i++) {    //Huruf pada Kata pertama dibuat lower case semua
        if(S1[i] >= 'A' && S1[i] <='Z')
        {
            S1[i] = S1[i] + 32;
        }
    }

    for (j=0; j<jumlahS2; j++) {    //Huruf pada Kata kedua dibuat lower case semua
        if(S2[j] >= 'A' && S2[j] <='Z')
        {
            S2[j] = S2[j] + 32;
        }
    }

    for(i=0; i<jumlahS2; i++) { //Membandingkan persamaan huruf kata pertama dan kedua
        if (S1[i] == S2[i]) {   //Apabila sama maka true
            Hasil = true;
        } else if (S1[i] != S2[i]) {    //Apabila beda maka false
            Hasil = false;
        }

        if (Hasil == false ) {  //Ketika bernilai false, keluar iterasi
            break;
        }
    }

    if (Hasil == true) {    //Ketika hasil bernilai true, maka 2 kata merupakan kata yang sama
        cout << "Ya";
    } else {                //Ketika hasil bernilai true, maka 2 kata merupakan kata yang berbeda
        cout << "Tidak";
    }
}
