/**********************************************************
Nama file: for3.cpp
***********************************************************/

#include <iostream>
#include <string> // string

using namespace std;

int main(){
    string s;

    cout << "Masukkan teks: ";
    getline(cin, s);

    cout << "\nSebelum dibalik: " << s;

    for (size_t i {0}, j {s.length()-1}; i<j; i++, j--) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    cout << "\nSetelah dibalik: " << s;

    return 0;
}
