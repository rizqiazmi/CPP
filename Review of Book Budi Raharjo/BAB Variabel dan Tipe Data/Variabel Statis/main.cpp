 /**********************************************************
Nama file: static.cpp
**********************************************************/

#include <iostream>

using namespace std;

// mendefinisikan fungsi test()
void test() {
    static int a {0}; // variabel dengan kelas penyimpanan "static"
    a++; // menaikkan nilai a dengan 1
    cout << "Nilai a: " << a << endl << endl;
}

int main(){
    // memanggil fungsi test() sebanyak tiga kali
    cout << "Pemanggilan pertama" << endl;
    test();
    cout << "Pemanggilan kedua" << endl;
    test();
    cout << "Pemanggilan ketiga" << endl;
    test();

    return 0;
}
