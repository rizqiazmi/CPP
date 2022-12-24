/**********************************************************
Nama file: while2.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main(){
    int n, i, faktorial {1};

    cout << "Masukkan bilangan bulat: ";
    cin >> n;

    if (n > 1) {
        i = n;
        while (i >= 1) {
            faktorial *= i; // dapat ditulis: faktorial
faktorial * i;
            i--;
        }
    }
    cout << n << "! = " << faktorial;

    return 0;
}
