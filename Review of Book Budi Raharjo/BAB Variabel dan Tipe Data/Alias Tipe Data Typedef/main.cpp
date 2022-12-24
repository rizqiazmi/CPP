/**********************************************************
Nama file: typedef.cpp
***********************************************************/
#include <iostream>
#include <cstring>

using namespace std;
typedef unsigned long long ull;
typedef char c_string[255];

int main() {
    ull a;
    c_string s;

    a = 123'456'789ULL;
    strcpy(s, "Demo typedef");

    cout << "Nilai a: " << a << endl;
    cout << "Nilai s: " << s << endl;

    return 0;
}
