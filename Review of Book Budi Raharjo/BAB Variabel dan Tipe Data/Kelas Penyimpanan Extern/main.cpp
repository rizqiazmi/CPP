 /**********************************************************
Nama file: main.cpp
**********************************************************/

#include <iostream>
#include "extern.h"

using namespace std;

// menyertakan file extern.cpp
//#include "extern.cpp"

extern int a; // mendeklarasikan variabel eksternal

int main() {
    cout << "Sebelum nilai a dinaikkan" << endl;
    cout << "Nilai a: " << a << endl;

    // memanggil fungsi incrementA()
    incrementA();

    cout << endl;
    cout << "Setelah nilai a dinaikkan" << endl;
    cout << "Nilai a: " << a << endl;

    return 0;
}
