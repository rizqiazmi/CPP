/**********************************************************
Nama file: if_banyak_kondisi.cpp
***********************************************************/

#include <iostream>
#include <string>  // string
#include <cstdlib> // exit()

using namespace std;

int main(){
    int noHari;
    string namaHari;

    cout << "Masukkan nomor hari: ";
    cin >> noHari;

    if (noHari == 1) {
        namaHari = "Minggu";
    } else if (noHari == 2) {
        namaHari = "Senin";
    } else if (noHari == 3) {
        namaHari = "Selasa";
    } else if (noHari == 4) {
        namaHari = "Rabu";
    } else if (noHari == 5) {
        namaHari = "Kamis";
    } else if (noHari == 6) {
        namaHari = "Jumat";
    } else if (noHari == 7) {
        namaHari = "Sabtu";
    } else {
        cout << "Tidak ada hari ke-" << noHari << endl;
        exit(1);
    }

    cout << "Nama hari ke-" << noHari << " adalah " << namaHari << endl;
    return 0;
}
