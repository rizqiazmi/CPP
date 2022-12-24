/**********************************************************
Nama file: array_parameter.cpp
***********************************************************/

#include <iostream>

using namespace std;

const int N = 5;
typedef int Array[N];

// mendefinisikan fungsi dengan parameter bertipe array
void cetakArray(Array arr) {
    for (auto i {0}; i<N; i++) {
        cout << arr [i] << " ";
    }
    cout << endl;
}

int main() {
    Array a, b, c, d;

    // mengisi nilai ke dalam array a, b, c, dan d
    for (auto i {0}; i<5; i++) {
        a[i] = i+1;
        b[i] = (i+1) * 10;
        c[i] = (i+1) * 100;
        d[i] = (i+1) * 1000;
    }

    // menampilkan elemen array a
    cout << "Isi array a: ";
    cetakArray(a);

    // menampilkan elemen array b
    cout << "Isi array b: ";
    cetakArray(b);

    // menampilkan elemen array c
    cout << "Isi array c: ";
    cetakArray(c);

    // menampilkan elemen array a
    cout << "Isi array d: ";
    cetakArray(d);

    return 0;
}
