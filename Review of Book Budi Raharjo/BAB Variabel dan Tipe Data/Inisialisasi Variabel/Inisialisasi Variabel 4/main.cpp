/**********************************************************
Nama file: variabel4.cpp
**********************************************************/

#include <iostream>

using namespace std;

int main() {
    // inisialisasi variabel
    int a {10}, b {20};

    // menampilan nilai awal
    cout << "Sebelum dibuah" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl << endl;

    // mengubah nilai variabel
    a = 100;
    b = 200;

    cout << "Setelah dibuah" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
