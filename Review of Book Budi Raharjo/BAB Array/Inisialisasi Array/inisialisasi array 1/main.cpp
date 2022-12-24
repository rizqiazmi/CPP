/**********************************************************
Nama file: inisialisasi_array1.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main(){
    // inisialisasi array a
    int a[5] = {2,3,4};

    // menampilkan elemen array a
    cout << "Isi array a: ";
    for (auto e: a) {
        cout << e << " ";
    }

    return 0;
}
