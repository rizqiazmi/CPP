/**********************************************************
Nama file: linear_search1.cpp
***********************************************************/

#include <iostream>

using namespace std;

// fungsi mengembalikan nilai bertipe int
int linearSearch(int array[], int size, int value) {
    int pos {0};
    bool found {false};
    while (pos < size && !found) {
        if (array[pos] == value) {
            found = true;
        } else {
            pos += 1;
        }
    }
    return found ? pos : -1;
}

void cetakArray(int array[], int size) {
    cout << "[";
    for (auto i {0}; i < size; i++) {
        cout << array[i];
        if (i != size-1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    int data[5] {300,200,500,400,100};

    // menampilkan elemen array
    cout << "Isi array: ";
    cetakArray(data, 5);

    // mencari nilai 200
    cout << "\nNilai 200: " << linearSearch(data, 5, 200) << endl;

    // mencari nilai 400
    cout << "Nilai 400: " << linearSearch(data, 5, 400) << endl;

    // mencari nilai 700
    cout << "Nilai 700: " << linearSearch(data, 5, 700) << endl;

    // mencari nilai 900
    cout << "Nilai 900: " << linearSearch(data, 5, 900) << endl;

    return 0;
}
