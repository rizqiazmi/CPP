/***********************************************************
Nama file: array_typedef.cpp
***********************************************************/

#include <iostream>

using namespace std;

typedef int Array[5];

int main(){
    Array a, b, c, d;

    // mengisi nilai ke dalam array a, b, c, dan d
    for (auto i {0}; i<5; i++) {
        a[i] = i+1;
        b[i] = (i+1) * 10;
        c[i] = (i+1) * 100;
        d[i] = (i+1) * 1000;
    }

    // menampilkan elemen array a
    cout << "Isi array a: ";
    for (auto e: a) {
        cout << e << " ";
    }

    // menampilkan elemen array b
    cout << "\nIsi array b: ";
    for (auto e: b) {
        cout << e << " ";
    }

    // menampilkan elemen array c
    cout << "\nIsi array c: ";

    for (auto e: c) {
        cout << e << " ";
    }

    // menampilkan elemen array a
    cout << "\nIsi array d: ";
    for (auto e: d) {
        cout << e << " ";
    }

    return 0;
}
