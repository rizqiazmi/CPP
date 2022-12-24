/**********************************************************
Nama file: kondisional1.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main() {
    int a {-11};
    int b {99};
    int maksimum, abs;

    // mencari nilai terbesar
    if (a > b) {
        maksimum = a;
    } else {
        maksimum = b;
    }

    // mencari nilai terbesar
    if (a >= b) {
        abs = a;
    } else {
        abs = -a;
    }

    cout << "maksimum \t: " << maksimum << endl;
    cout << "abs \t\t: " << abs << endl;
    return 0;
}
