 /**********************************************************
Nama file: tipe_bilangan_bulat.cpp
**********************************************************/

#include <iostream>
#include <climits>

using namespace std;

int main() {
    char c1;
    unsigned char c2;

    int i1;
    unsigned int i2;

    cout << "Tipe char:" << endl;
    cout << "Nilai minimum: " << CHAR_MIN << endl;
    cout << "Nilai maksimum: " << CHAR_MAX << endl;
    cout << "Ukuran: " << (int) sizeof(c1) << " byte" << endl;

    cout << "\nTipe unsigned char:" << endl;
    cout << "Nilai minimum: " << 0 << endl;
    cout << "Nilai maksimum: " << UCHAR_MAX << endl;
    cout << "Ukuran: " << (int) sizeof(c2) << " byte" << endl;

    cout << "\nTipe unsigned int:" << endl;
    cout << "Nilai minimum: " << INT_MIN << endl;
    cout << "Nilai maksimum: " << INT_MAX << endl;
    cout << "Ukuran: " << (int) sizeof(i1) << " byte" << endl;

    cout << "\nTipe unsigned int:" << endl;
    cout << "Nilai minimum: " << 0 << endl;
    cout << "Nilai maksimum: " << UINT_MAX << endl;
    cout << "Ukuran: " << (int) sizeof(i2) << " byte" << endl;

    return 0;
}
