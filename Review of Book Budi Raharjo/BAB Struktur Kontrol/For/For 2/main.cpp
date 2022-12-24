/**********************************************************
Nama file: for2.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main(){
    int n, faktorial {1};

    cout << "Masukkan bilangan bulat: ";
    cin >> n;

    cout << n << "! = ";

    if (n > 1) {
        for (auto i {n}; i >= 1; i--) {
            cout << i << (i != 1 ? " x " : " = ");
            faktorial *= i;
        }
    }
    cout << faktorial;
    return 0;
}
