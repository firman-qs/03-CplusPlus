#include <algorithm>
#include <array>
#include <iostream>

using std::cout, std::endl, std::array, std::sort;

const size_t arraySize = 10;

// fungsi menampilkan array
void printArr(array<int, 5> angka) {
    cout << "angka => [  ";
    for (int &number : angka) {
        cout << number << "  ";
    }
    cout << "]\n";
}

void printArr(array<char, 5> huruf) {
    cout << "huruf => [  ";
    for (char &chr : huruf) {
        cout << chr << "  ";
    }
    cout << "]\n";
}

int main() {
    // buat array dengan standard library
    cout << "Array awal (sebelum di sort)\n";
    array<int, 5> angka = {3, 1, 2, 8, 5};
    array<char, 5> huruf = {'g', 'd', 'f', 'n', 'k'};

    // print array
    printArr(angka);
    printArr(huruf);

    cout << "\n";

    cout << "Array akhir (setelah di sort)\n";
    // sort array
    sort(angka.begin(), angka.end());
    sort(huruf.begin(), huruf.end());

    // print array (sudah di sort)
    printArr(angka);
    printArr(huruf);

    return 0;
}
