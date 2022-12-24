 /**********************************************************
Nama file: nonstatic.cpp
**********************************************************/

#include <iostream>

using namespace std;

// mendefinisikan fungsi test ()
void test() {
    int a (0); // variabel dengan kelas penyimpanan "auto"
    a++; // menaikkan nilai a dengan 1
    cout << "Nilai a: " << a << endl << endl;
}

int main() {
    // memanggil fungsi test() sebanyak tiga kali
    cout << "Pemanggilan pertama" << endl;
    test();
    cout << "Pemanggilan kedua" << endl;
    test();
    cout << "Pemanggilan ketiga" << endl;
    test();

    return 0;
}
