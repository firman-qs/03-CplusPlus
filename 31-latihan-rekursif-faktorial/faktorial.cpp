#include <iostream>
using namespace std;

int faktorial(int n);

int main() {
    int n, hasil;
    cout << "Masukkan angka : ";
    cin >> n;
    cout << "Faktorial dari " << n << " adalah " << faktorial(n) << endl;
    return 0;
}

int faktorial(int n) {
    if (n > 1) {
        cout << n << "*";
        return n * faktorial(n - 1);
    } else {
        cout << n << " = ";
        return n;
    }
}