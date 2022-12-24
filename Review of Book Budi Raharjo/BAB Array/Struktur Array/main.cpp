/**********************************************************
Nama file: struktur_array.cpp
***********************************************************/

#include <iostream>
#include <string>   // string

using namespace std;

using kontak = struct {
    string nama;
    string alamat;
    string nohp[3];
};

int main() {
    // variabel bertipe struktur
    kontak k;

    // mengisi nilai ke dalam variabel k
    k.nama = "Adam";
    k.alamat = "Jl ABC 777 Bandung";
    k.nohp[0] = "0819217777";
    k.nohp[1] = "08152266666";
    k.nohp[2] = "08122355555";

    // menampilkan nilai
    cout << "Nama\t: " << k.nama << endl;
    cout << "Alamat\t: " << k.alamat << endl;
    cout << "No. HP\t: ";
    for (auto i {0}; i < 3; i++) {
        cout << k.nohp[i];
        if (i < 2) cout << ", ";
    }

    return 0;
}
