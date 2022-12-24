/**********************************************************
Nama file: exit.cpp
***********************************************************/

#include <iostream>
#include <string>  // string
#include <cstdlib> // exit() dan EXIT_FAILURE

using namespace std;

const string BULAN[] = {
                "Januari", "Februari", "Maret",
                "April", "Mei", "Juni",
                "Juli", "Agustus", "September",
                "Oktober", "November", "Desember"};

int main(){
    int noBulan;

    cout << "Masukkan nomor bulan (1..12): " ;
    cin >> noBulan;

    if (noBulan < 1 || noBulan > 12) {
        cout << "Program dihentikan. "
             << "Nilai di luar rentang."
             << endl;
        exit(EXIT_FAILURE); // sama dengan: return 1;
    }

    cout << "Bulan ke-" << noBulan << " adalah " << BULAN[noBulan-1];

    return 0;
}
