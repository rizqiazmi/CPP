/**********************************************************
Nama file: inisialisasi_array.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main(){
    // inisialisasi array a
    int a[5] = {10, 20, 30, 40, 50};

    // inisialisasi array b
    int b[] = {2, 3, 4};

    // menampilkan elemen array a
    cout << "Isi array a: ";
    for (auto e: a) {
        cout << e << " ";
    }

    // menampilkan elemen array b
    cout << "\nIsi array b: ";
    for (auto e: b) {
        cout << e << " ";
    }

    return 0;
}
