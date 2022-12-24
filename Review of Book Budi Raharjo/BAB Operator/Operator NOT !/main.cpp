/**********************************************************
Nama file: logika_not.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main(){
    int x;
    bool genap;

    cout << "Masukkan bilangan bulat: ";
    cin >> x;

    genap = (x % 2 == 0);

    if (!genap) {
        cout << x << " adalah bilangan ganjil" << endl;
    } else {
        cout << x << " adalah bilangan genap" << endl;
    }

    return 0;
}
