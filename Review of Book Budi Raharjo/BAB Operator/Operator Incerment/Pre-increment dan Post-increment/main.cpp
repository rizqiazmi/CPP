/**********************************************************
Nama file: increment.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main(){
    int x;

    // pre-increment
    cout << "Pre-increment" << endl;
    x = 9;
    cout << "x \t: " << x << endl;
    cout << "++x \t: " << ++x << endl;
    cout << "x \t: " << x << endl;

    // post-increment
    cout << "\nPost-increment" << endl;
    x = 9;
    cout << "x \t: " << x << endl;
    cout << "x++ \t: " << x++ << endl;
    cout << "x \t: " << x << endl;

    return 0;
}
