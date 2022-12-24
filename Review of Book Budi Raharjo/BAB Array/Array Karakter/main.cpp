/**********************************************************
Nama file: array_karakter.cpp
***********************************************************/

#include <iostream>
#include <cstring> // strlen()

using namespace std;

int main(){
    char s1[] {"Pemrograman C++"};
    char s2[16];
    int n;

    // mendapatkan jumlah karakter pada s1
    n = strlen(s1); // n bernilai 15

    // menyalin elemen-elemen array dari s1 ke s2
    for (auto i {0}; i < n; i++) {
        s2[i] = s1[i];
    }
    s2[n] = '\0'; // s2[15] = '\0';

    // menampilkan s1 dan s2
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;

    return 0;
}
