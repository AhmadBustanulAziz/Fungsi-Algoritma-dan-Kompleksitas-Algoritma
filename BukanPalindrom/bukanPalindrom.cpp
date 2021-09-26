/*
Nama      : Ahmad Bustanul Aziz
NIM       : 24060118120022
Matkul    : Analisis dan Strategi Algoritma
Tanggal   : 9 September 2021
Deskripsi : Program untuk membedakan string yang bukan
            palindrome dan string yang merupakan palindrome
*/

#include <iostream>
#include <string.h>

using namespace std;

void isPalindrom(char Kata[]) {
    //Kamus Lokal
    int awal, akhir;

    awal = 0;
    akhir = strlen(Kata)-1;

    //Algoritma
    while (awal < akhir) {  //Melakukan iterasi dari 0 sampai jumlah kata dikurangi 1
        if (Kata[awal] != Kata[akhir]) {    //Apabila huruf awal != huruf akhir, maka bukan palindrom
            cout << "Ya\n";
            return;
        } else {    //Apabila huruf awal == huruf akhir, maka lanjutkan iterasi
            akhir--;
            awal++;
        }
    }
    cout << "Tidak\n";  //Apabila sampai selesai huruf awal == huruf akhir, maka bukan palindrom
}

int main()
{
    //Kamus Global
    int N, i, j;

    //Algoritma
    cin >> N;

    char P[N][100];

    for(i=0;i<N;i++) {
        cin >> P[i];
    }

    for (j=0;j<N;j++) {
        isPalindrom(P[j]);
    }
    return 0;
}
