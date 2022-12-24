/**********************************************************
Nama file: linear_search2.cpp
***********************************************************/

#include <iostream>

using namespace std;

// fungsi mengembalikan nilai bertipe int
int linearSearch(int array[], int size, int value) {
    int pos {0};
    bool found {false}, stop {false};
    while (pos < size && !found && !stop) {
        if (array[pos] == value) {
            found = true;
        } else {
            if (array[pos] > value) {
                stop = true;
            } else {
                pos += 1;
            }
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
    int data[5] {100,200,300,400,500};

    // menampilkan elemen array
    cout << "Isi array: ";
    cetakArray(data, 5);

    // mencari nilai 100
    cout << "\nNilai 100: " << linearSearch(data, 5, 100) << endl;

    // mencari nilai 150
    cout << "Nilai 150: " << linearSearch(data, 5, 150) << endl;

    // mencari nilai 300
    cout << "Nilai 300: " << linearSearch(data, 5, 300) << endl;

    return 0;
}
