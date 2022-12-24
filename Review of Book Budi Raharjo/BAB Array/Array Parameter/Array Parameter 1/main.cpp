/**********************************************************
Nama file: array_parameter1.cpp
***********************************************************/

#include <iostream>
#include <iomanip> // fixed

using namespace std;

const int N = 5;
typedef int Array[N];

// mendefinisikan fungsi dengan parameter bertipe array
void cetakArray(Array arr) {
    for (auto i {0}; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

double hitungRataRata(Array arr) {
    int jumlah {0};
    for (auto i {0}; i < N; i++) {
        jumlah += arr[i];
    }
    return (double) jumlah / N;
}

int main() {
    Array a {1, 2, 3, 4, 5};

    // menampilkan elemen array a
    cout << "Isi array a\t: ";
    cetakArray(a);

    // menampilkan nilai rata-rata
    cout << fixed;
    cout << "Rata-rata\t: ";
    cout << hitungRataRata(a);

    return 0;
}
