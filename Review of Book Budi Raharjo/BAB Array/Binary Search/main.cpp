/**********************************************************
Nama file: binary_search.cpp
***********************************************************/

#include <iostream>

using namespace std;

int binarySearch(int array[], int first, int last, int value) {
    int middle;
    bool found {false};
    while (first <= last && !found) {
        middle = (first + last) / 2;
        if (array[middle] == value) {
            found = true;
        } else {
            if (value < array[middle]) {
                last = middle - 1;
            } else {
                first = middle + 1;
            }
        }
    }
    return found ? middle : -1;
}

void cetakArray(int array[], int size) {
    cout << "[";
    for (auto i {0}; i < size; i++) {
        cout << array[i];
        if (i != size-1) cout << ", ";
    }
    cout << "]" << endl;
}

int main(){
    int data[5] {100,200,300,400,500};

    // menampilkan elemen array
    cout << "Isi array: ";
    cetakArray(data, 5);

    // mencari nilai 200
    cout << "\nNilai 200: " << binarySearch(data, 0, 4, 200) << endl;

    // memcari nilai 400
    cout << "Nilai 400: " << binarySearch(data, 0, 4, 400) << endl;

    // mencari nilai 700
    cout << "Nilai 700: " << binarySearch(data, 0, 4, 700) << endl;

    // mencari nilai 900
    cout << "Nilai 900: " << binarySearch(data, 0, 4, 900) << endl;

    return 0;
}
