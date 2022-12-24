/**********************************************************
Nama file: tipe_bilangan_kompleks.cpp
***********************************************************/

#include <iostream>
#include <complex> // agar kelas complex dikenal

using namespace std;

int main() {
    complex<double> a(4.0, 6.0); // 4.0+6.0i
    complex<double> b(3.0, 9.0); // 3.0+9.0i
    complex<double> c;

    cout << "Bilangan kompleks a" << endl;
    cout << "Nilai riil: " << a.real() << endl;
    cout << "Nilai imaginer: " << a.imag() << endl;

    cout << "\nBilangan kompleks b" << endl;
    cout << "Nilai riil: " << b.real() << endl;
    cout << "Nilai imaginer: " << b.imag() << endl;

    // menjumlahkan a dan b
    c = a + b;

    cout << "\nHasil penjumlahan" << endl;
    cout << "Nilai riil: " << c.real() << endl;
    cout << "Nilai imaginer: " << c.imag() << endl;

    return 0;
}
