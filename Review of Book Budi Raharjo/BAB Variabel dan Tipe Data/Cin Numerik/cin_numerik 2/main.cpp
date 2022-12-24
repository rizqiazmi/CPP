 /**********************************************************
Nama file: cin_numerik2.cpp
**********************************************************/

#include <iostream>

using namespace std;

int main(){
    // mendeklarasikan variabel
    int panjang, lebar, luas;

    // menampilkan informasi program
    cout << "PERSEGI PANJANG" << endl;

    // membaca data panjang dan lebar
    cout << "Masukkan panjang\t: ";
    cin >> panjang;
    cout << "Masukkan lebar \t\t: ";
    cin >> lebar;

    // melakukan perhitungan dan menampung hasilnya
    // ke dalam variabel luas
    luas = panjang * lebar;

    // menampilkan hasil perhitungan
    cout << endl;
    cout << "Luas persegi panjang = " << luas << endl;

    return 0;
}
