/*
Nama      : Ahmad Bustanul Aziz
NIM       : 24060118120022
Matkul    : Analisis dan Strategi Algoritma
Tanggal   : 8 September 2021
Deskripsi : Program menentukan bilangan genap atau bilangan ganjil
*/

#include <iostream>

int main()
{
    //Kamus Global
    int A;

    //Algoritma
    scanf("%d", &A);  //Input

    if (A % 2 == 0) { //Jika genap maka cetak "GENAP"
        printf("GENAP");
    } else {          //Jika ganjil maka cetak "GANJIL"
        printf("GANJIL");
    }
}
