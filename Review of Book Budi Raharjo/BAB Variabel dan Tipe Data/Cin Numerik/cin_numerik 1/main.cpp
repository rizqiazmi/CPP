 /**********************************************************
Nama file: cin_numerik1.cpp
**********************************************************/

#include <iostream>
#include <algorithm> // max()

using namespace std;

int main() {
    int a,b,c,maksimum;

    // menampilkan keterangan
    cout << "Masukkan tiga bilangan bulat: ";
    // membaca tiga bilangan bulat dalam satu baris
    cin >> a >> b >> c;

    // mencari nilai maksimum
    maksimum = max(a,b);
    maksimum = max(maksimum,c);

    cout << "Nilai maksimum adalah " << maksimum << endl;
    return 0;
}
