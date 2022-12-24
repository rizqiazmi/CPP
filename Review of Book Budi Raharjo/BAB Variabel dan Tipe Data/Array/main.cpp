#include <iostream>

using namespace std;

const int JUMLAH_DATA = 5;

int main() {
    // deklarasi array
    double data[JUMLAH_DATA];

    // deklarasi variabel yang diperlukan
    double total {0.0}, rataRata;

    // mengisi nilai ke dalam array
    cout << "Masukkan nilai ke dalam array" << endl;
    for (auto i {0}; i < JUMLAH_DATA; i++) {
        cout << "Data ke-" << i+1 << ": ";
        cin >> data[i];
        total += data[i];
    }

    // menghitung nilai rata-rata
    rataRata = total / JUMLAH_DATA;

    // menampilkan isi array
    cout << endl << "Isi array\t: [";
    for (auto i {0}; i < JUMLAH_DATA; i++) {
        cout << data[i];
        if (i < JUMLAH_DATA-1) cout << ", ";
    }
    cout << "]" << endl;

    cout << "Nilai total\t= " << total << endl;
    cout << "Rata-rata\t= " << rataRata << endl;

    return 0;
}
