#include <iostream>
using namespace std;

// Cara agar kita dapat mendeklarasikan sebuah fungsi di bagian bawah eksekusi.
// Akan sangat berguna saat bekerja dengan multiple file
double hitung_luas(double p, double l);
double hitung_keliling(double p, double l);
void tampilkan(double p, double l);

int main() {
    double panjang, lebar;
    cout << "Masukkan panjang : ";
    cin >> panjang;
    cout << "Masukkan lebar : ";
    cin >> lebar;

    tampilkan(panjang, lebar);

    return 0;
}

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