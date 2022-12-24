 /**********************************************************
Nama file: cin_string1.cpp
**********************************************************/

#include <iostream>

using namespace std;

int main() {
    string nama;
    cout << "Masukkan nama: ";

    // membaca satu baris string
    getline(cin, nama);
    cout << "Hai " << nama << ", selamat datang di pemrograman C++" << endl;

    return 0;
}
