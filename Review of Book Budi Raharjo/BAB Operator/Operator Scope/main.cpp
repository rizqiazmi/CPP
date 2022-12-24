/**********************************************************
Nama file: scope_resolution.cpp
***********************************************************/

#include <iostream>

using namespace std;

class Contoh {
public:
    static int x;
    static void f() {
        cout << "Nilai x: " << x << endl;
    }
};

int Contoh::x;

int main() {
    Contoh::x = 9;
    Contoh::f();

    return 0;
}
