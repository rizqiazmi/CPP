/**********************************************************
Nama file: nilai_bilangan_riil_iomanip.cpp
***********************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double d1 {9.9E18};
    double d2 {9.9E-18};

    cout << fixed;
    cout << "Nilai d1: " << d1 << endl;
    cout << "Nilai d2: " << d2 << endl;

    return 0;
}
