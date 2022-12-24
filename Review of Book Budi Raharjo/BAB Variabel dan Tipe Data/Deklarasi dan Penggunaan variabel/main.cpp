/**********************************************************
Nama file: variabell.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main() {
    // mendeklarasikan bariabel
    int panjang;
    int lebar;
    int luas;

    // mengisi nilai ke dalam variabel
    panjang = 8;
    lebar = 6;

    // melakukan perhitungan dan menampung hasilnya
    // ke dalam variabel luas
    luas = panjang * lebar;

    // menampilkan informasi program
    cout << "PERSEGI PANJANG" << endl;

    // menampilkan nilai variabel
    cout << "panjang = " << panjang << endl;
    cout << "lebar = " << lebar << endl;

    // menampilkan hasil perhitungan
    cout << "Luas persegi panjang = " << luas << endl;

    return 0;
}
