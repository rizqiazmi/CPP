/**********************************************************
Nama file: inisialisasi_array2.cpp
***********************************************************/

#include <iostream>
#include <string>  // string
#include <iomanip> // setw()

using namespace std;

string BULAN[] {
          "Januari", "Februari", "Maret", "April",
          "Mei", "Juni", "Juli", "Agustus",
          "September", "Oktober", "November", "Desember"
        };

int main(){
    // menampilkan elemen array
    cout << "Nama-nama bulan: " << endl;
    for (auto i {0}; i<12; i++) {
        cout << setw(2) << i+1;
        cout << ". " << BULAN[i] << endl;
    }
    return 0;
}
