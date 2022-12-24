/**********************************************************
Nama file: tipe_bilangan_riil.cpp
***********************************************************/

#include <iostream>

const float PI = 3.14159F;

using namespace std;

int main() {
    // notasi eksponen dengan bilangan riil yang nilainya sangat besar atau kecil
    double d1 {9.9E18};
    double d2 {9.9E-18};

    cout << "Nilai d1: " << d1 << endl;
    cout << "Nilai d2: " << d2 << endl;

/*  //floating-point yaitu bilangan yang mengandung pecahan
    float r, luas, keliling;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;

    luas = PI * r * r;
    keliling = 2 * PI * r;

    cout << "\nLuas lingkaran\t\t= " << luas << endl;
    cout << "Keliling lingkaran\t= " << keliling << endl;
*/
    return 0;
}
