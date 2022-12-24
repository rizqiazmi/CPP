/**********************************************************
Nama file: switch1.cpp (salah)
***********************************************************/

#include <iostream>
#include <cstdlib> // exit()

using namespace std;

int main() {
    int noHari;

    cout << "Masukkan nomor hari: ";
    cin >> noHari;

    switch (noHari) {
        case 1: cout << "Minggu" << endl;
        case 2: cout << "Senin" << endl;
        case 3: cout << "Selasa" << endl;
        case 4: cout << "Rabu" << endl;
        case 5: cout << "Kamis" << endl;
        case 6: cout << "Jumat" << endl;
        case 7: cout << "Sabtu" << endl;
        default: cout << "Tidak ada hari ke-" << noHari << endl;
    }

    return 0;
}
