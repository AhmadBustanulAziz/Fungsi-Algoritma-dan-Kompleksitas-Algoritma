/*
Nama      : Ahmad Bustanul Aziz
NIM       : 24060118120022
Matkul    : Analisis dan Strategi Algoritma
Tanggal   : 8 September 2021
Deskripsi : Program menjumlahkan bilangan dari 1 sampai
            bilangan ke-N
*/

#include <iostream>
#include <cmath>

int main() {
    //Kamus Global
    int i, N, penjumlahan = 0;

    //Algoritma
    scanf("%d", &N);

    for(i=1;i<=N;i++)   //Melakukan iterasi bilangan dari 1 sampai bilangan ke-N
    {
        penjumlahan += i;
    }
    printf("%d", penjumlahan);
}
