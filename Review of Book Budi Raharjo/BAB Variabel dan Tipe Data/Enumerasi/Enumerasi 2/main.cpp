/**********************************************************
Nama file: enumerasi2.cpp
***********************************************************/

#include <iostream>
#include <string>

using namespace std;

const string HARI[] = {"Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu"};

enum Gender {Pria, Wanita};
enum NamaHari {Minggu, Senin, Selasa, Rabu, Kamis, Jumat, Sabtu};

int main() {
    // deklarasi variabel
    string nama;
    Gender jenisKelamin;
    NamaHari hariLahir;

    // mengisi nilai ke dalam variabel
    nama = "Aria Wijaya";
    jenisKelamin = Pria;
    hariLahir = Jumat;

    // menampilkan nilai
    cout << "Nama\t\t: " << nama << endl;
    cout << "Jenis kelamin\t: " << ((jenisKelamin == Pria) ? "Pria" : "Wanita") << endl;
    cout << "Hari lahir\t: " << HARI[hariLahir] << endl;

    return 0;
}
