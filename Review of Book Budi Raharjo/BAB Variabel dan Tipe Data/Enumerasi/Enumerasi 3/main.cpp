/**********************************************************
Nama file: enumerasi3.cpp
***********************************************************/

#include <iostream>
#include <string>

using namespace std;

const string HARI[] = {"Minggu","Senin","Selasa","Rabu","Kamis","Jumat","Sabtu"};

enum class Gender {Pria, Wanita};
enum class NamaHari {Minggu, Senin, Selasa, Rabu, Kamis, Jumat, Sabtu};


int main() {
    // deklarasi variabel
    string nama;
    Gender jenisKelamin;
    NamaHari hariLahir;

    // mengisi nilai ke dalam variabel
    nama = "Aria Wijaya";
    jenisKelamin = Gender::Pria;
    hariLahir = NamaHari::Jumat;

    // menampilkan nilai
    cout << "Nama\t\t: " << nama << endl;
    cout << "Jenis kelamin\t: " << ((jenisKelamin == Gender::Pria) ? "Pria" : "Wanita") << endl;
    cout << "Hari lahir\t: " << HARI[(int) hariLahir] << endl;

    return 0;
}
