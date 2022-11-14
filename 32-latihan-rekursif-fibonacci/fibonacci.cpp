#include <iostream>
using namespace std;

int fibonacci(int x);

int main() {
    int x, total = 0;
    cout << "Masukkan deret fibonacci ke = ";
    cin >> x;
    cout << "Deretnya adalah : ";
    for (int i = 0; i < x; i++) {
        cout << " " << fibonacci(i);
        total += fibonacci(i);
    }
    cout << "\nJumlah total = " << total << endl;
    return 0;
}

int fibonacci(int x) {
    if ((x == 1) || (x == 0)) {
        return (x);
    } else {
        return (fibonacci(x - 1) + fibonacci(x - 2));
    }
}