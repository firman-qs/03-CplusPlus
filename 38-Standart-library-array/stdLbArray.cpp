#include <array>
#include <iostream>
using namespace std;

int main() {
    cout << "========== Halo std array =========" << endl;

    // membuat array dengan standart library
    // std::array<int, jumlaArray>namaArray;
    array<int, 5> angka;
    for (int i = 0; i < 5; i++) {
        angka[i] = i;
        cout << "angka[" << i << "] = " << angka[i] << " address : " << &angka[i] << endl;
    }
    cout << endl;

    // ukuran array
    cout << "ukuran dari angka : " << angka.size() << endl;
    // address awal array
    cout << "address awal : " << angka.begin() << endl;
    // address akhir array
    cout << "address akhir : " << angka.end() << endl;
    // array pada index ke-i
    cout << "angka ke-3 : " << angka.at(2) << endl;

    // pointer + std array untuk mengubah angka terakhir
    int *ptr = (angka.end() - 1);
    *ptr = 99;
    cout << "\n=== angka terakhir termanipulasi ==" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "angka[" << i << "] = " << angka[i] << " address : " << &angka[i] << endl;
    }

    // re-assign std array
    angka.at(2) = 33;
    cout << "\n===== angka[2] termanipulasi =====" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "angka[" << i << "] = " << angka[i] << " address : " << &angka[i] << endl;
    }
    return 0;
}