/*
Nama      : Ahmad Bustanul Aziz
NIM       : 24060118120022
Matkul    : Analisis dan Strategi Algoritma
Tanggal   : 9 September 2021
Deskripsi : Program membalik sebuah inputan.
            Contoh Input  : Hallo
            Contoh Output : ollaH
*/

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    //Kamus Global
    char S[99], temp;
    int jumlahHuruf, i, n;

    //Algoritma
    scanf("%s", &S);        //Input
    jumlahHuruf = strlen(S);//Menghitung jumlah huruf
    n = jumlahHuruf;        //Jumlah huruf

    for (i=0; i<(jumlahHuruf/2); i++) { //Membalik huruf awal dengan belakang
        n-=1;
        temp = S[i];
        S[i] = S[n];
        S[n] = temp;
    }
    printf("%s", S);
}
