/**********************************************************
Nama file: variabel3.cpp
**********************************************************/

#include <iostream>

using namespace std;

int main() {
    // inisialisasi bariabel
    int panjang {5}, lebar {4};

    // inisialisasi dinamis
    int luas = panjang * lebar;

    // menampilkan informasi program
    cout << "PERSEGI PANJANG" << endl;

    // menampilkan nilai variabel
    cout << "panjang = " << panjang << endl;
    cout << "lebar   = " << lebar << endl;

    // menampilkan hasil perhitungan
    cout << "Luas persegi panjang = " << luas << endl;

    return 0;
}
