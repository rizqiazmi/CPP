/**********************************************************
Nama file: escape_sequence.cpp
***********************************************************/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1 {"C:\\Windows"};
    string s2 {"\'C\' dan \"C++\""};
    int a {8}, b {9};

    cout << "s1\t: " << s1 << endl;
    cout << "s2\t: " << s2 << endl;
    cout << "a\t: " << a << endl;
    cout << "b\t: " << b << endl;

    return 0;
}
