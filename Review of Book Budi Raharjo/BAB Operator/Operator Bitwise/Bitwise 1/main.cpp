/**********************************************************
Nama file: bitwise1.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main() {
    char x {12};

    cout << (int) x << " >> 1 \t= " << (x >> 1) << endl;
    cout << (int) x << " >> 2 \t= " << (x >> 2) << endl;
    cout << (int) x << " << 1 \t= " << (x << 1) << endl;
    cout << (int) x << " << 1 \t= " << (x << 2) << endl;

    return 0;
}
