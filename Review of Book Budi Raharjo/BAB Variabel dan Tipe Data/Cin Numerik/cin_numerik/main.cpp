 /**********************************************************
Nama file: cin_numerik.cpp
**********************************************************/

#include <iostream>

using namespace std;

int main() {
    int i;
    double d;

    // menampilkan keterangan
    cout << "Masukkan bilangan bulat: ";
    // membaca bilangan bulat
    cin >> i;

    // menampilkan keterangan
    cout << "Masukkan bilangan riil: ";
    // membaca bilangan riil
    cin >> d;

    cout << endl;
    cout << "Anda memasukkan bilangan " << i << " dan " << d << endl;
    return 0;
}
