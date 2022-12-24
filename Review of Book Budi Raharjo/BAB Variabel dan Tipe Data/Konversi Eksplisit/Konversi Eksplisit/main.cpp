/**********************************************************
Nama file: konversi_eksplisit.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main() {
    char c {'A'};
    int i {90};

    // menampilkan karakter sebagai bilangan bulat
    cout << "Nilai c: " << (int) c << endl;

    // mneampilkan bilangan bulat sebagai karakter
    cout << "Nilai i: " << (char) i << endl;

    return 0;
}
