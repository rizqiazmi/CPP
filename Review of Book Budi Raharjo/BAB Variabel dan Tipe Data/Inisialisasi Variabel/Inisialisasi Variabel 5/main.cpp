/**********************************************************
Nama file: variabel5.cpp
**********************************************************/

#include <iostream>
#include <typeinfo> // untuk typeid()

using namespace std;

int main() {
    // inisialisasi variabel
    auto a {10};    // a diisi dengan tipe int
    auto b {4.95};  // b diisi dengan tipe double
    auto c {'B'};   // c diisi dengan tipe char
    auto d {4.95F}; // d diisi dengan tipe float

    // menampilkan nilai
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl << endl;

    // menampilkan tipe data
    cout << "Tipe data a: " << typeid(a).name() << endl;
    cout << "Tipe data b: " << typeid(b).name() << endl;
    cout << "Tipe data c: " << typeid(c).name() << endl;
    cout << "Tipe data d: " << typeid(d).name() << endl;
}
