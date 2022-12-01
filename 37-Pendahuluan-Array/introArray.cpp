#include <iostream>
using namespace std;

int main() {
    // membuat Array

    // Cara 1
    // int namaArray[5];
    // namaArray[0] = 3;
    // namaArray[1] = 6;
    // namaArray[2] = 7;
    // namaArray[3] = 2;
    // namaArray[4] = 9;

    // Cara 2
    int namaArray[5] = {3, 4, 5, 6, 7};

    cout << &namaArray[0] << " nilainya adalah " << namaArray[0] << endl;
    cout << &namaArray[1] << " nilainya adalah " << namaArray[1] << endl;
    cout << &namaArray[2] << " nilainya adalah " << namaArray[2] << endl;
    cout << &namaArray[3] << " nilainya adalah " << namaArray[3] << endl;
    cout << &namaArray[4] << " nilainya adalah " << namaArray[4] << endl
         << endl;

    // Manipulasi Array
    // Cara 1
    // int *ptr = namaArray;
    // *(ptr+2) = 999;

    // Cara 2
    namaArray[2] = 777;

    cout << &namaArray[0] << " nilainya adalah " << namaArray[0] << endl;
    cout << &namaArray[1] << " nilainya adalah " << namaArray[1] << endl;
    cout << &namaArray[2] << " nilainya adalah " << namaArray[2] << endl;
    cout << &namaArray[3] << " nilainya adalah " << namaArray[3] << endl;
    cout << &namaArray[4] << " nilainya adalah " << namaArray[4] << endl
         << endl;

    // kelemahan, tidak ada fungsi untuk menampilkan size array, sort array, max value dll. seperti di python
    cout << "ukuran Array = " << sizeof(namaArray) << " byte" << endl;
    cout << "jumlah member Array = " << sizeof(namaArray)/sizeof(int) << " data" << endl;
    return 0;
}