#include <cmath>
#include <iostream>
using namespace std;

// reporter
int pangkat(double x, double y) {
    double z = pow(x, y);
    return z;
}

// worker
void tampilkan(int input) {
    cout << "hasil dari a^b = ";
    cout << input << endl;
}

int main() {
    // Fungsi Pangkat
    double a, b;
    cout << "masukkan nilai a : ";
    cin >> a;
    cout << "masukkan nilai b : ";
    cin >> b;
    tampilkan(pangkat(a, b));
    return 0;
}