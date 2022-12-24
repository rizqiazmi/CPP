/**********************************************************
Nama file: logika_or.cpp
***********************************************************/

#include <iostream>
#include <cctype> // isalpha()

using namespace std;

int main() {
    char c;

    cout << "Masukkan sebuah karakter: ";
    cin >> c;

    if (isalpha(c)) {
        if (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U') {
                cout << c << " adalah huruf vokal" << endl;
            } else {
                cout << c << " adalah huruf konsonan" << endl;
            }
    } else {
        cout << "Data yang dimasukkan bukan huruf" << endl;
    }

    return 0;
}
