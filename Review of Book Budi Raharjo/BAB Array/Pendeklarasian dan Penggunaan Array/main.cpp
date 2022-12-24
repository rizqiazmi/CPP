/**********************************************************
Nama file: ilove.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main(){
    int a[5];
    int jumlah {0};

    // mengisi elemen array
    cout << "Memasukkan nilai ke dalam array" << endl;
    for (auto i {0}; i < 5; i++) {
        cout << "a[" << i+1 << "] : ";
        cin >> a[i];
        jumlah += a[i];
    }

    // menampilkan elemen array
    cout << "\nData yang dimasukkan\t: ";
    for (auto e: a) {
        cout << e << " ";
    }
    cout << "\nJumlah total\t\t: " << jumlah;
    return 0;
}
