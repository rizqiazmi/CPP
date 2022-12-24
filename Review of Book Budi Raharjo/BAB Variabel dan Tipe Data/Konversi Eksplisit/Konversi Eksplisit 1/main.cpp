/**********************************************************
Nama file: konversi_eksplisit1.cpp
***********************************************************/

#include <iostream>
#include <iomanip> // fixed

using namespace std;

int main() {
    int alas, tinggi;
    float luas;

    cout << "SEGITIGA" << endl;
    cout << "Masukkan nilai alas: ";
    cin >> alas;
    cout << "Masukkan nilai tinggi: ";
    cin >> tinggi;

    luas = (float) alas * tinggi / 2;

    // menampilkan luas segitiga
    cout << fixed;
    cout << "\nLuas segitiga = " << luas << endl;

    return 0;
}
