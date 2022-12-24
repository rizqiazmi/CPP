/**********************************************************
Nama file: while3.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main(){
    int n, i, faktorial {1};

    cout << "Masukkan bilangan bulat: ";
    cin >> n;

    cout << n << "! = ";

    if (n > 1) {
        i = n;
        while (i >= 1) {
            if (i != 1) {
            cout << i << " x ";
        } else {
            cout << i << " = ";
        }
        faktorial *= i;
        i--;
     }
    }
    cout << faktorial;
    return 0;
}
