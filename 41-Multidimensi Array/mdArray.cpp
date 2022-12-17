#include <iostream>
using namespace std;

void printArr(int *, int baris, int kolom);

int main() {
    system("clear");

    const int baris = 2;
    const int kolom = 2;
    int arrayMD[baris][kolom] = {1, 2, 3, 4};

    printArr(*arrayMD, baris, kolom);

    cout << "Multidimensi Array" << endl;
    return 0;
}

void printArr(int *arrayPtr, int baris, int kolom) {
    int indexArrayMD = 0;
    for (int row = 0; row < baris; row++) {
        cout << "[ ";
        for (int column = 0; column < kolom; column++) {
            cout << *(arrayPtr + indexArrayMD) << " ";
            indexArrayMD++;
        }
        cout << "]" << endl;
    }
};