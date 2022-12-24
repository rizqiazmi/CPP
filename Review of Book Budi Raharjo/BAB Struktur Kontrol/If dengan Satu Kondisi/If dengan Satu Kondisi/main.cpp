/**********************************************************
Nama file: if1kondisi.cpp
***********************************************************/

#include <iostream>
#include <cstdlib> // exit()
#include <iomanip> // fixed

using namespace std;

int main() {
    double a, b, c;

    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;

    if (b == 0) {
        cout << "KESIMPULAN: Nilai b tidak boleh nol." << endl;
        exit(1); // keluar program
    }

    c = a / b;

    cout << fixed;
    cout << a << " / " << b << " = " << c << endl;

    return 0;
}
