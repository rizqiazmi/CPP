/**********************************************************
Nama file: continue2.cpp
***********************************************************/

#include <iostream>
#include <iomanip> // fixed

using namespace std;

int main(){
    double a, b, c;

    cout << "Masukkan nilai a: ";
    cin >> a;

    while (true) {
        cout << "Masukkan nilai b: ";
        cin >> b;

        if (b == 0){
            cout << "Nilai b tidak boleh nol." << endl;
            continue;
        }

        break; // pengulangan berhenti ketika b tidak bernilai 0
    }

    c = a / b;

    cout << fixed << endl;
    cout << a << " / " << b << " = " << c;

    return 0;
}
