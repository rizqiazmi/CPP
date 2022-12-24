 /**********************************************************
Nama file: mutable.cpp
**********************************************************/

#include <iostream>

using namespace std;

class Contoh {
public:
    mutable int a; // anggota kelas dengan kelas penyimpanan "mutable"
    int b; // anggota kelas non-mutable
    Contoh(int a, int b) {
        this->a = a;
        this->b = b;
    }
};

int main() {
    // membuat objek konstan dari kelas Contoh
    const Contoh obj(10,20);

    // menampilkan nilai a dan b di dalam obj
    cout << "Sebelum dibuah" << endl;
    cout << "Nilai a: " << obj.a << endl;
    cout << "Nilai b: " << obj.b << endl;

    // mengubah nilai a
    obj.a = 88; // obj.a bisa dibuah karena a bersifat mutable

    // mengubah nilai b
    // obj.b = 99; // salah, b tidak dapat dibuah
    cout << endl;
    cout << "Setelah dibuah" << endl;
    cout << "Nilai a : " << obj.a << endl;
    cout << "Nilai b : " << obj.b << endl;
    return 0;
}
