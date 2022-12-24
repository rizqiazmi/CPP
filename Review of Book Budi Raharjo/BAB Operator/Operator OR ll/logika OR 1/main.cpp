/**********************************************************
Nama file: logika_or1.cpp
***********************************************************/

#include <iostream>
#include <cctype> // isalpha() dan tolower()

using namespace std;

int main() {
    char c;

    cout << "Masukkan sebuah karakter: ";
    cin >> c;

    if (isalpha(c)) {
        char ch = tolower(c);
        bool vokal = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');

        if (vokal) {
            cout << c << " adalah huruf vokal" << endl;
        } else {
            cout << c << " adalah huruf konsonan" << endl;
        }
    } else {
        cout << "Data yang dimasukkan huruf" << endl;
    }

    return 0;
}
