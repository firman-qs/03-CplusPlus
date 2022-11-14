#include <iostream>
using namespace std;

// Fungsi Bilangan faktorial
int faktorial(int n) {
    if (n > 1) {
        return n * faktorial(n - 1);
    } else {
        return 1;
    }
}

int pangkat(int n, int p) {
    if (p > 1) {
        return n * pangkat(n, p - 1);
    } else {
        return n;
    }
}

int main() {
    cout << "Faktorial dari 3 = " << faktorial(3) << endl;
    cout << "2 pangkat 3 = " << pangkat(2, 3) << endl;
    return 0;
}
