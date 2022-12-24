/**********************************************************
Nama file: konversi_implisit1.cpp
***********************************************************/

#include <iostream>
#include <iomanip> // fixed

using namespace std;

int main() {
    double d1, d2;
    float f {12.3F};
    int i {2};
    unsigned long ul {123UL};

    // 1. i akan dikonversi ke tipe unsigned long
    // 2. hasil perkalian akan dikonversi ke tipe double
    d1 = i * ul; // Perintah I

    // 1. ul akan dikonversi ke tipe float
    // 2. hasil penjumlahan akan dikonversi ke tipe double
    d2 = ul + f; // Perintah II

    cout << fixed;
    cout << "Nilai d1: " << d1 << endl;
    cout << "Nilai d2: " << d2 << endl;

    return 0;
}
