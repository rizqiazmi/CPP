/**********************************************************
Nama file: union.cpp
***********************************************************/

#include <iostream>

using namespace std;

union bilangan {
    int integer;
    double real;
};

int main() {
    bilangan a, b;
    int mode;

    cout << "PROGRAM PEMBAGIAN" << endl;
    cout << "[1] Pembagian bilangan bulat" << endl;
    cout << "[2] Pembagian bilangan riil" << endl << endl;
    cout << "Masukkan pilihan Anda: ";
    cin >> mode;

    if (mode == 1) {
        cout << "\nPembagian Bilangan Bulat" << endl;
        cout << "Masukkan nilai a: ";
        cin >> a.integer;
        cout << "Masukkan nilai b: ";
        cin >> b.integer;
        cout << "\nHasil bagi = " << (a.integer / b.integer) << endl;
    } else if (mode == 2) {
        cout << "\nPembagian Bilangan Riil" << endl;
        cout << "Masukkan nilai a: ";
        cin >> a.real;
        cout << "Masukkan nilai b: ";
        cin >> b.real;
        cout << "\nHasil bagi = " << (a.real / b.real) << endl;
    } else {
        cout << "Pilihan tidak tersedia.";
    }
    return 0;
}
