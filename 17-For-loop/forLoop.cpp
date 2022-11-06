#include <iostream>
using namespace std;

int main() {
    // Faktorial Menggunakan for Loop
    int a;
    cout << "Selamat Datang di Kalkualtor Faktorial" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Masukkan angka : ";
    cin >> a;

    cout << a;
    for (int i = (a - 1); i >= 1; i--) {
        a *= i;
    }
    cout << "! (faktorial) = " << a << endl;
    return 0;
}