/*
Nama      : Ahmad Bustanul Aziz
NIM       : 24060118120022
Matkul    : Analisis dan Strategi Algoritma
Tanggal   : 8 September 2021
Deskripsi : Program menghitung panjang sisi
            miring suatu segitiga siku-siku
*/

#include <iostream>
#include <cmath>

int main()
{
    //Kamus Global
    int A, B;
    float sisiMiring;

    //Algoritma
    scanf("%d", &A);
    scanf("%d", &B);

    sisiMiring = sqrt(pow(A,2) + pow(B,2)); //Menghitung akar kuadrat dari A^2 + B^2
    printf("%.2f", sisiMiring);
}
