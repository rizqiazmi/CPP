/**********************************************************
Nama file: break.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main(){
    for (auto i {0}; i < 10; i++) {
        cout << i << " ";
        if (i == 4) break;
    }

    return 0;
}
