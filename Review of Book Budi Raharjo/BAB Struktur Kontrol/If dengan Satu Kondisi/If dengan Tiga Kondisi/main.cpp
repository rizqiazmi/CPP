/**********************************************************
Nama file: if3kondisi.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main() {
    int a;

    cout << "Masukkan nilai a: ";
    cin >> a;

    if (a > 0) {
        cout << a << " adalah bilangan positif" << endl;
    } else if (a == 0) {
        cout << "Anda memasukkan bilangan 0" << endl;
    } else {
        cout << a << " adalah bilangan negatif" << endl;
    }

    return 0;
}
