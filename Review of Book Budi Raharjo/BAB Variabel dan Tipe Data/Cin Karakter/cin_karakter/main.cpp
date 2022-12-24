 /**********************************************************
Nama file: cin_karakter.cpp
**********************************************************/

#include <iostream>

using namespace std;

int main() {
    char c1,c2,c3;

    cout <<"Masukkan karakter: ";
    // membaca karakter
    cin >> c1;
    cout << "Anda telah memasukkan karakter '" << c1 << "'" << endl;
    cout << endl;
    cout << "Masukkan dua karakter: ";
    // membaca dua karakter
    cin >> c2 >> c3;

    cout << "Kode ASCII untuk karakter '" << c2 << "' dan '" << c3 << "' adalah " << (int) c2 << " dan " << (int) c3 << endl;

    return 0;
}
