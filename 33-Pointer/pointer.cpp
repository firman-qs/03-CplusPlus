#include <math.h>
#include <iostream>
using namespace std;

int kuadrat(int *);
int kuadrat2(int c);

int main() {
    int a = 3;
    // Pointer
    int *aPtr = &a;

    // int a mempunyai nilai dan adress
    cout << "Variabel a memiliki nilai : "
         << a << "\ndan terletak pada adress : " << &a << endl;

    // dereferencing, mengambil data dari sebuah pointer
    // *aPtr = mengambil value
    // aPtr = mengambil alamat
    cout << "kuadrat dari a = " << kuadrat(&a) << endl;
    cout << "kuadrat dari a = " << kuadrat2(a) << endl;
    cout << a << endl;
    return 0;
}

// fungsi dengan argumen pointer (menggunakan memory yang sama)
int kuadrat(int *c) {
    cout << c << " alokasi sama" << endl;
    return *c * *c;
}
// fungsi biasa  (menggunakan memory baru)
int kuadrat2(int c) {
    cout << &c << " alokasi berbeda" << endl;
    return c * c;
}
