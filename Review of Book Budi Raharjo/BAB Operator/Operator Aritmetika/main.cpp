/**********************************************************
Nama file: aritmetika.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main(){
    cout << "10 + 3 \t= " << (10 + 3) << endl;
    cout << "10 - 3 \t= " << (10 - 3) << endl;
    cout << "10 * 3 \t= " << (10 * 3) << endl;
    cout << endl;

    cout << "10 / 3 \t\t= " << (10 / 3) << endl;
    cout << "10.0 / 3 \t= " << (10.0 / 3) << endl;
    cout << "10 / 3.0 \t= " << (10 / 3.0) << endl;
    cout << "10.0 / 3.0 \t= " << (10.0 / 3.0) << endl;
    cout << endl;
    cout << "10 % 3 \t= " << (10 % 3) << endl;

    // salah, operator % tidak dapat diterapkan untuk bilangan riil
    // cout << "10.0 % \t= " << (10.0 % 3) << endl;
    // cout << "10 % 3.0 \t= " << (10 % 3.0) << endl;
    // cout << "10.0 5 3.0 \t= " << (10.0 % 3.0) << endl;
    return 0;
}
