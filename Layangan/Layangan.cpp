/*
Nama      : Ahmad Bustanul Aziz
NIM       : 24060118120022
Matkul    : Analisis dan Strategi Algoritma
Tanggal   : 8 September 2021
Deskripsi : Program menentukan luas layangan dari inputan
            diagonal 1 dan diagonal 2
*/

#include <iostream>

int main() {
    //Kamus Global
    int d1, d2, Luas;   //d1: variabel diagonal 1, d2: variabel diagonal 3, Luas: variabel Luas layangan

    //Algoritma
    scanf("%d", &d1);   //input d1
    scanf("%d", &d2);   //input d2

    Luas = 0.5 * d1 * d2;   //Luas layangan
    printf("%d", Luas);
}

