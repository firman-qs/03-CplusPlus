#include <array>
#include <iostream>
using namespace std;

int main() {
    array<int, 11> nilai;

    cout << "Program Menampilkan Grafik Nilai" << endl;
    for (int i = 0; i < nilai.size(); i++) {
        cout << "masukkan jumlah mahasiswa dengan nilai ";
        if (i == 0) {
            cout << "0-9 : ";
            cin >> nilai[i];
        } else if (i < 10) {
            cout << i * 10 << "-" << (i * 10) + 9 << " : ";
            cin >> nilai[i];
        } else {
            cout << "100 : ";
            cin >> nilai[i];
        }
    }

    cout << "\nGrafik Nilai" << endl;
    for (int i = 0; i < nilai.size(); i++) {
        if (i == 0) {
            cout << "0-9   : ";
        } else if (i < 10) {
            cout << i * 10 << "-" << (i * 10) + 9 << " : ";
        } else {
            cout << "100   : ";
        }
        for (int bintang = 0; bintang < nilai[i]; bintang++) {
            cout << "=";
        }
        cout << endl;
    }

    return 0;
}