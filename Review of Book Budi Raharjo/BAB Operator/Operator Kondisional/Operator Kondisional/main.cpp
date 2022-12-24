/**********************************************************
Nama file: kondisional.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main(){
    int a {-11};
    int b {99};
    int maksimum, abs;

    // mencari nilai terbesar
    maksimum = (a > b) ? a : b;

    // mencari harga mutlak
    abs = (a >= 0) ? a : -a;

    cout << "maksimum \t: " << maksimum << endl;
    cout << "abs \t\t: " << abs << endl;

    return 0;
}
