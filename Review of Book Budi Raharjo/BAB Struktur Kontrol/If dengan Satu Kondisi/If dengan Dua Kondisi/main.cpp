/**********************************************************
Nama file: if2kondisi.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main() {
    int a;

    cout << "Masukkan bilangan bulat: ";
    cin >> a;

    if (a % 2 == 0) {
        cout << a << " adalah bilangan genap" << endl;
    } else {
        cout << a << " adalah bilangan ganjil" << endl;
    }

    return 0;
}
