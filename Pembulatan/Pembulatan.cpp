/*
Nama      : Ahmad Bustanul Aziz
NIM       : 24060118120022
Matkul    : Analisis dan Strategi Algoritma
Tanggal   : 8 September 2021
Deskripsi : Program pembulatan bilangan float
*/

#include <iostream>
#include <cmath>

int main() {
    //Kamus Global
    float A;
    int Pembulatan;

    //Algoritma
    scanf("%f", &A);
    Pembulatan = round(A);  //Melakukan pembulatan dengan fungsi bawaan <cmath>
    printf("%d", Pembulatan);
}
