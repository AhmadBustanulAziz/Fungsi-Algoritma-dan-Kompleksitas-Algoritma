/*
Nama      : Ahmad Bustanul Aziz
NIM       : 24060118120022
Matkul    : Analisis dan Strategi Algoritma
Tanggal   : 8 September 2021
Deskripsi : Program menampilkan kalimat “Aku Cinta ASA”
            ke layar sebanyak jumlah yang ia inginkan
            atau “Aku Benci ASA” apabila bilangannya negatif.
*/
#include <iostream>

int main()
{
    //Kamus Global
    int n;

    //Algoritma
    scanf("%d", &n);    //Input

    if (n>0)        //Apabila input > 0, maka cetak "Aku Cinta ASA"
    {
        for (int i=1;i<=n;i++)
        {
            printf("Aku Cinta ASA\n");
        }
    }
    else if (n<0)   //Apabila input < 0, maka cetak "Aku Benci ASA"
    {
        printf("Aku Benci ASA");
    }
    else            //Kondisi ketika input == 0, mencetak kosong
    {
        printf(" ");
    }
}

