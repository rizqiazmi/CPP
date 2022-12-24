/**********************************************************
Nama file: do_while1.cpp
***********************************************************/

#include <iostream>
#include <iomanip> // fixed

using namespace std;

int main() {
    double a, b, c;

    cout << "Masukkan nilai a: ";
    cin >> a;

    do {
        cout << "Masukkan nilai b: ";
        cin >> b;
        if (b == 0) {
            cout << "Nilai b tidak boleh nol." << endl;
        }
    } while (b == 0);

    c = a / b;

    cout << fixed;
    cout << a << " / " << b << " = " << c;

    return 0;
}
