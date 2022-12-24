 /**********************************************************
Nama file: variabel7.cpp
**********************************************************/

 #include <iostream>

using namespace std;

// variabel global
int x;

void inisialisasi() {
    // mengakses variabel x dari fungsi inisialisasi()
    x = 0; // mengisi nilai awal
}

void ubah(int nilai) {
    // mengakses variabel x dari fungsi ubah ()
    x = nilai;
}

void cetak() {
    cout << "Nilai x : " << x << endl;
}

int main(){
    // memanggil fungsi inisialisasi()
    inisialisasi();

    // menampilkan nilai x sebelum dibuah
    cout << "Sebelum dibuah" << endl;
    cetak();

    // mengubah nilai x
    ubah(9);

    // menampilkan nilai x setelah dibuah
    cout << endl;
    cout << "Setelah dibuah" << endl;
    cetak();

    return 0;
}
