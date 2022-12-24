/**********************************************************
Nama file: sizeof1.cpp
***********************************************************/

#include <iostream>

using namespace std;

struct Struktur {
    char c;  // 1 byte
    int i;   // 4 byte
    float f; // 4 byte
};

class Kelas {
    double d; // 8 byte
public:
    Kelas() { d = 0.0; }
    void setD(double d) { this->d = d; }
    double getD() { return d; }
};

int main() {
    Struktur s;
    Kelas k;

    cout << "sizeof s\t\t: " << sizeof s << " byte" << endl;
    cout << "sizeof k\t\t: " << sizeof k << " byte" << endl;
    cout << "sizeof(Struktur)\t: " << sizeof(Struktur) << " byte" << endl;
    cout << "sizeof(Kelas)\t\t: " << sizeof(Kelas) << " byte" << endl;

    return 0;
}
