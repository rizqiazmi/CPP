/**********************************************************
Nama file: array_struktur.cpp
***********************************************************/

#include <iostream>
#include <string>   // string
#include <iomanip>  // setw()

using namespace std;

using kontak = struct {
    string nama;
    string alamat;
    string nohp;
};

int main(){
    // array dari tipe struktur
    kontak daftar[100];
    int n;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    cout << endl;
    for (auto i {0}; i < n; i++) {
        cin.ignore();
        cout << "DATA KE-" << i + 1 << endl;
        cout << "Nama\t: ";
        getline(cin, daftar[i].nama);
        cout << "Alamat\t: ";
        getline(cin, daftar[i].alamat);
        cout << "No. HP\t: ";
        getline(cin, daftar[i].nohp);
    }

    cout << "\nData yang dimasukkan: " << endl;
    for (auto i {0}; i < n; i++) {
        cout << setw(9) << daftar[i].nama << " | ";
        cout << setw(20) << daftar[i].alamat << " | ";
        cout << setw(12) << daftar[i].nohp << endl;
    }

    return 0;
}
