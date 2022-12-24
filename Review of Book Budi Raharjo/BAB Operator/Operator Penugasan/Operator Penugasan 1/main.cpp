/**********************************************************
Nama file: penugasan1.cpp
***********************************************************/

#include <iostream>
#include <string>   // string

using namespace std;

int main(){
    int i {10};
    string s {"Pemrograman"};

    cout << "Keadaan awal" << endl;
    cout << "Nilai i: " << i << endl;
    cout << "Nilai s: " << s << endl;

    // menambah nilai i dengan 8
    i += 8;     // bisa ditulis: i = i + 8

    // menyambung string s
    s += " ";   // spasi
    s += "C++";

    cout << "\nKeadaan akhir" << endl;
    cout << "Nilai i: " << i << endl;
    cout << "Nilai s: " << s << endl;
    return 0;
}
