#include <cmath>
#include <iostream>
using namespace std;

int pangkat(double x, double y) {
    double z = pow(x, y);
    return z;
}

int main() {
    // Fungsi Pangkat
    double a, b;
    cout << "masukkan nilai a : ";
    cin >> a;
    cout << "masukkan nilai b : ";
    cin >> b;
    cout << "hasil dari " << a << " pangkat " << b << " = " << pangkat(a, b) << endl;

    return 0;
}