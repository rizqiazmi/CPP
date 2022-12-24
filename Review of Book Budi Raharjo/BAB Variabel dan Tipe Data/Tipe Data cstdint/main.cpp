/**********************************************************
Nama file: cstdint.cpp
***********************************************************/

#include <iostream>
#include <cstdint>

using namespace std;

int main(){
    // notasi biner
    uint32_t a {0b100100011U}; // 281U

    // notasi oktal
    int32_t b {012L}; // 10L

    // notasi heksadesimal
    uint32_t c {0xdeadLU}; // 57005UL

    cout << "Nilai a: " << a << endl;
    cout << "Nilai b: " << b << endl;
    cout << "Nilai c: " << c << endl;
    return 0;
}
