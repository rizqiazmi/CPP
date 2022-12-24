/**********************************************************
Nama file: relasional.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 20;

    cout << "a \t: " << a << endl;
    cout << "b \t: " << b << endl;
    cout << "a == b \t: " << ((a == b) ? "ture" : "false") << endl;
    cout << "a != b \t: " << ((a != b) ? "true" : "false") << endl;
    cout << "a < b \t: " << ((a < b) ? "true" : "false") << endl;
    cout << "a > b \t: " << ((a > b) ? "true" : "false") << endl;
    cout << "a <= b \t: " << ((a <= b) ? "true" : "false") << endl;
    cout << "a >= b \t: " << ((a >= b) ? "true" : "false") << endl;

    // operator relasional dalam blok pemilihan
    if (a < b) {
        cout << "a lebih kecil dari b" << endl;
    }

    // operator relasional dalam blok penggulangan
    for (int i {a}; i <= b; i += 2) {
        cout << i << " ";
    }

    return 0;
}
