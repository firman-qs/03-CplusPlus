#include <iostream>
using namespace std;

double hitung_luas(double p, double l) {
    double luas = p * l;
    return luas;
}

double hitung_keliling(double p, double l) {
    double keliling = 2 * (p + l);
    return keliling;
}

void tampilkan(double p, double l) {
    cout << "keliling persegi panjang adalah : " << hitung_keliling(p, l) << endl;
    cout << "luas persegi panjang adalah : " << hitung_luas(p, l) << endl;
}

int main() {
    double panjang, lebar;
    cout << "Masukkan panjang : ";
    cin >> panjang;
    cout << "Masukkan lebar : ";
    cin >> lebar;

    tampilkan(panjang, lebar);

    return 0;
}