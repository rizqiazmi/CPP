/**********************************************************
Nama file: for8.cpp
***********************************************************/

#include <iostream>
#include <iomanip> // setw()

using namespace std;

const int N = 10;

int main(){
    cout << setw(4) << " * ";
    for (auto i {1}; i<=N; i++) {
        cout << setw(3);
        cout << i << " ";
    }
    cout << endl;

    for (auto i {1}; i<=N; i++) {
        cout << setw(3);
        cout << i << " ";
        for (auto j {1}; j<=N; j++) {
            cout << setw(3);
            cout << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}
