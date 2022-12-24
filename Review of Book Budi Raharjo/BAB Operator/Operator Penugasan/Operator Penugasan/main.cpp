/**********************************************************
Nama file: penugasan.cpp
***********************************************************/

#include <iostream>
#include <string>  // string
#include <cstring> // strcpy()
#include <iomanip> // fixed

using namespace std;

int main() {
    int i;
    long l;
    float f;
    double d;
    string cpp_string;
    char c_string[255];

    // menggunakan operator =
    i = 123;        // mengisi nilai bertipe int
    l = 123456L;    // mengisi nilai bertipe long
    f = 123.456F;   // mengisi nilai bertipe float
    d = 123456.789; // mengisi nilai bertipe double
    cpp_string = "Bahasa C++";      // mengisi nilai bertipe string gaya C++
    // c_string = "Bahasa C";       // salah
    strcpy(c_string, "Bahasa C");   // mengisi nilai bertipe string gaya C

    cout << i << endl;
    cout << l << endl;
    cout << f << endl;
    cout << d << endl;
    cout << cpp_string << endl;
    cout << c_string << endl;
    return 0;
}
