/**********************************************************
Nama file: konversi_implisit.cpp
***********************************************************/

#include <iostream>
#include <iomanip> // fixed

using namespace std;

int main() {
    int i {100};
    double d = i;

    cout << fixed;
    cout << "Nilai i: " << i << endl;
    cout << "Nilai d: " << d << endl;

    return 0;
}
