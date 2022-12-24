/**********************************************************
Nama file: for7.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main(){

    // blok pengulangan bagian luar
    for (auto i {0}; i<3; i++) {

        // blok pengulangan bagian dalam
        for (auto j {0}; j<5; j++) {
            cout << "* ";
        }
        // ganti baris untuk setiap nilai i
        cout << endl;
    }
    return 0;
}
