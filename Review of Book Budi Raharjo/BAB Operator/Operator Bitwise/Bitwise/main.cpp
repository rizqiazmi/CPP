/**********************************************************
Nama file: bitwise.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main() {
    char a {12}, b {10}; // 8-bit

    cout << "a \t= " << (int) a << endl;
    cout << "b \t= " << (int) b << endl;
    cout << "a & b \t= " << (a & b) << endl;
    cout << "a | b \t= " << (a | b) << endl;
    cout << "a ^ b \t= " << (a ^ b) << endl;
    cout << "~a \t= " << (~a) << endl;

    return 0;
}
