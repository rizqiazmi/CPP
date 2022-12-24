/**********************************************************
Nama file: array_konstan.cpp
***********************************************************/

#include <iostream>
#include <string>   // string

using namespace std;

// mendefinisikan array konstan
const string HARI[7] = {
                "Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu"
            };

int main(){
    // mengubah elemen pertama
    // HARI[0] = "Ahad";    // salah, elemen array tidak dapat dibuah
    // menampilkan elemen array
    cout << "Nama-nama hari: " << endl;
    for (auto hari: HARI) {
        cout << hari << endl;
    }

    return 0;
}
