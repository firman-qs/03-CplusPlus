#include <iostream>
using namespace std;

// OVERLOADING FUNTION ==> Menimpa fungsi
// beberapa fungsi dengan nama yang sama, untuk melakukan tugas berbeda

int luas_kotak(int p, int l);
int luas_kotak(int s);
double luas_kotak(double s);

int main() {
    cout << "Luas kotak 2x3 : " << luas_kotak(2, 3) << endl;
    cout << "Luas kotak 2x3 : " << luas_kotak(2) << endl;
    cout << "Luas kotak 2.5x2.5 : " << luas_kotak(2.5) << endl;
    return 0;
}

int luas_kotak(int p, int l) {
    return p * l;
}
int luas_kotak(int s) {
    return s * s;
}
double luas_kotak(double s) {
    return s * s;
}