/**********************************************************
Nama file: do_while.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main(){
    int i;

    cout << "Menggunakan while: " << endl;
    i = -10;
    while (i > 0) {
        cout << i << endl;
        i--;
    }
    cout << endl;

    cout << "Menggunakan do-while: " << endl;
    i = -10;
    do {
        cout << i << endl;
        i--;
    } while (i > 0);

    return 0;
}
