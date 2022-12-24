/**********************************************************
Nama file: while1.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main() {
    int i;

    // mengulang aksi sebanyak 5 kali
    i = 4;                // indeks dimulai dari 4
    while (i >= 0) {
        cout << i << " "; // menampilkan nilai i dan satu spasi
        i--;              // menurunkan nilai i
    }

    return 0;
}
