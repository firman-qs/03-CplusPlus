#include <array>
#include <iostream>
using namespace std;

const int baris = 2;
const int kolom = 3;

void printArrayMD(array<array<int, kolom>, baris> &nilaiArr);

int main() {
    array<array<int, kolom>, baris> arrayMD = {1, 2, 3, 4, 5, 6};
    printArrayMD(arrayMD);
    return 0;
}

void printArrayMD(array<array<int, kolom>, baris> &nilaiArr) {
    for (array<int, kolom> nilaiBaris : nilaiArr) {
        for (int nilaiKolom : nilaiBaris) {
            cout << nilaiKolom << " ";
        }
        cout << endl;
    }
};