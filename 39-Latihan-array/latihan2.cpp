#include <array>
#include <iostream>
using namespace std;

int main() {
    string repeat = "y";
    array<int, 11> nilaiFismat;

    do {
        cout << "=== Selamat Datang di Nilai FISMAT 2 ===" << endl;

        // main program
        for (int i = 0; i < nilaiFismat.size(); i++) {
            if (i == 0) {
                cout << "Nilai 0-9 : ";
                cin >> nilaiFismat[i];
            } else if (i < 10) {
                cout << "Nilai " << i * 10 << "-" << (i * 10) + 9 << " : ";
                cin >> nilaiFismat[i];
            } else {
                cout << "Nilai 100 :";
                cin >> nilaiFismat[i];
            }
        }

        for (int j = 0; j < nilaiFismat.size(); j++) {
            if (j == 0) {
                cout << "Nilai 0-9   : ";
            } else if (j < 10) {
                cout << "Nilai " << j * 10 << "-" << (j * 10) + 9 << " : ";
            } else {
                cout << "Nilai 100   : ";
            }
            for (int bar = 0; bar < nilaiFismat[j]; bar++) {
                cout << "=";
            }
            cout << endl;
        }

        cout << "\nmasukkan nilai ulang ? (y/n)";
        cin >> repeat;
        cout << endl;
        system("clear");
    } while (repeat == "y");

    cout << "\n=== Program Selesai ===" << endl;
    return 0;
}
