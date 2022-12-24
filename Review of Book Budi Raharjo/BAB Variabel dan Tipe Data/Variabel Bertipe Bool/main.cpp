/**********************************************************
Nama file: (title).cpp
***********************************************************/

#include <iostream>

using namespace std;

int main() {
    bool a {true}, b {false};

    cout << "Nilai a: " << a << endl;
    cout << "Nilai b: " << b << endl;

    if (a) {
        cout << "Baris ini akan dieksekusi" << endl;
    }

    if (b) {
        cout << "Baris ini tidak akan dieksekusi" << endl;
    }

    // ekspresi yang menghasilkan nilai logika
    cout << "100 > 10: " << (100 > 10) << endl;
    cout << "100 < 10: " << (100 < 10) << endl;
    return 0;
}
