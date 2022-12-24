/**********************************************************
Nama file: for.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main(){
    for (auto i {1}; i <= 10; i++) {
        cout << i << " adalah bilangan " << ((i % 2 == 0) ? "genap" : "ganjil") << endl;
    }

    return 0;
}
