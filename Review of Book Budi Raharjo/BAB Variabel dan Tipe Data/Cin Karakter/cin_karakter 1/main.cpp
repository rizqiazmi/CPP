 /**********************************************************
Nama file: cin_karakter1.cpp
**********************************************************/

#include <iostream>

using namespace std;

int main(){
    // mendeklarasikan variabel
    int panjang, lebar, luas;
    char jawab;

    // menampilkan informasi program
    cout << "PERSEGI PANJANG" << endl;

    do {
        // membaca data panjang dan lebar
        cout << "Masukkan panjang\t: ";
        cin >> panjang;
        cout << "Masukkan lebar\t\t: ";
        cin >> lebar;

        luas = panjang * lebar;

        cout << "Luas persegi panjang = " << luas << endl << endl;
        cout << "Hitung lagi (Y=Ya)? ";
        cin >> jawab;
        cout << endl;
    } while (jawab == 'Y' || jawab == 'y');

    return 0;
}
