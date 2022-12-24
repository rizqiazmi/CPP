/**********************************************************
Nama file: logika_and.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main() {
    cout << "a\t" << "b\t" << "a && b\t" << endl;
    cout << "true\t" << "true\t" << ((true && true) ? "true" : "false") << endl;
    cout << "true\t" << "false\t" << ((true && false) ? "true" : "false") << endl;
    cout << "false\t" << "true\t" << ((false && true) ? "true" : "false") << endl;
    cout << "false\t" << "false\t" << ((false && false) ? "true" : "false") << endl;
    return 0;
}
