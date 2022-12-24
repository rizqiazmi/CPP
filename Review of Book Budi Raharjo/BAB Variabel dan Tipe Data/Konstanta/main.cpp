 /**********************************************************
Nama file: konstanta.cpp
**********************************************************/

#include <iostream>

const double PI = 3.14159;

using namespace std;

int main() {
    double r, luas, keliling;
    cout << "LINGKARAN" << endl;
    cout << "Masukkan jari-jari: ";
    cin >> r;

    // menghitung luas dan keliling
    luas = PI * r * r;
    keliling = 2 * PI * r;

    cout << "Luas \t\t= " << luas << endl;
    cout << "Keliling \t= " << keliling << endl;

    return 0;
}
