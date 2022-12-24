/**********************************************************
Nama file: decrement.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main(){
    int x;

    // pre-dexrement
    cout << "Pre-decrement" << endl;
    x = 9;
    cout << "x \t: " << x << endl;
    cout << "--x \t: " << --x << endl;
    cout << "x \t: " << x << endl;

    // post-decrement
    cout << "\nPost-decrement" << endl;
    x = 9;
    cout << "x \t: " << x << endl;
    cout << "x-- \t: " << x-- << endl;
    cout << "x \t: " << x << endl;
    return 0;
}
