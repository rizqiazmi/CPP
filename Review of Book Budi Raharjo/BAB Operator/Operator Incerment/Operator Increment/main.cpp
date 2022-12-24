/**********************************************************
Nama file: increment1.cpp
***********************************************************/

#include <iostream>
#include <iomanip> // fixed

using namespace std;

int main() {
    double x; // x bertipe double

    cout << fixed;

    // pre-increment
    cout << "Pre-increment" << endl;
    x = 0.5;
    cout << "x \t: " << x << endl;
    cout << "++x \t: " << ++x << endl;
    cout << "x \t: " << x << endl;

    // post-increment
    cout << "\nPost-increment" << endl;
    x = 0.5;
    cout << "x \t: " << x << endl;
    cout << "x++ \t: " << x++ << endl;
    cout << "x \t: " << x << endl;
    return 0;
}
