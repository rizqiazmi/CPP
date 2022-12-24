 /**********************************************************
Nama file: cin_string.cpp
**********************************************************/

#include <iostream>
#include <string> // string

using namespace std;

int main() {
    string nama;

    cout << "Masukkan nama: ";
    // membaca string
    cin >> nama;
    cout << "Hai " << nama << ", selamat datang di pemrograman C++" << endl;

    return 0;
}
