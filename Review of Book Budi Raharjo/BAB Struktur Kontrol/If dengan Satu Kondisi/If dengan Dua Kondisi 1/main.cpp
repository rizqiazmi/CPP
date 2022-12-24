/**********************************************************
Nama file: if2kondisi1.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main() {
    int a;

    cout << "Masukkan nilai a: ";
    cin >> a;

    if (a > 0) {
        cout << a << " adalah bilangan positif" << endl;
    } else {
        cout << a << " bukan bilangan positif" << endl;
    }

    return 0;
}
