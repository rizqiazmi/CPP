/**********************************************************
Nama file: for1.cpp
***********************************************************/

#include <iostream>
#include <iomanip> // fixed

using namespace std;

int main(){
    int n;
    double x, jumlah {0.0};
    double rataRata {0.0};

    cout << "Masukkan banyaknya data: ";
    cin >> n;

    for (auto i {0}; i < n; i++) {
        cout << "Data ke-" << i+1 << ": ";
        cin >> x;
        jumlah += x;
    }

    rataRata = jumlah / n;
    cout << fixed;
    cout << "\nRata-rata = " << rataRata;

    return 0;
}
