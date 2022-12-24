/**********************************************************
Nama file: for4.cpp
***********************************************************/

#include <iostream>
#include <iomanip> // fixed

using namespace std;

const int N = 5;

int main(){
    int data[] = {10,20,30,40,50};
    int jumlah {0};
    float rataRata {0.0F};

    cout << "[";
    for (auto i {0}; i<N; jumlah += data[i], i++) {
        cout << data[i];
        if (i<N-1) cout << ", ";
    }
    cout << "]" << endl;

    rataRata = jumlah / N;

    cout << fixed;
    cout << "\nJumlah total \t= " << jumlah << endl;
    cout << "Rata-rata \t= " << rataRata << endl;
    return 0;
}
