/**********************************************************
Nama file: variabel6.cpp
**********************************************************/

#include <iostream>

using namespace std;

void test() {
    int a {9} ; // variabel lokal untuk fungsi test()
    cout << "Nilai a di dalam fungsi test(): " << a << endl;

    // salah, fungsi test() tidak mengenal variabel b
    // cout << "Nilai b milik fungsi main(): " << b << endl;
}

int main() {
    int a {100}; // variabel lokal untuk fungsi main()
    int b {200}; // variabel lokal untuk fungsi main()

    // menampilkan a dan b
    cout << "Nilai a di dalam fungsi main(): " << a << endl;
    cout << "Nilai b di dalam fungsi main(): " << b << endl;

    // memanggil fungsi test ()
    test();
    return 0;
}
