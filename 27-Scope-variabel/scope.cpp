#include <iostream>
using namespace std;

// Variabel di dalam scope berbeda akan disimpan pada address yang berbeda
// sekalipun nama variabel yang digunakan adalah sama (misal semua x)

int x = 10;  // variabel global

int mainDua() {
    int x = 7; // variabel local mainDua
    return x;
}

int ambilGlobal() {
    return x; // akses variabel diatasnya
}

int main() {
    cout << "SCOPE VARIABEL: GLOBAL, LOCAL, BLOCK \n" << endl;
    cout << "1. Variabel Global : " << x << endl;
    int x = 13; //variabel locak main
    cout << "2. Variabel local main() : " << x << endl;
    cout << "3. Variabel Global : " << ambilGlobal() << endl;
    cout << "4. Variabel local main() : " << x << endl;
    cout << "5. Variabel local mainDua() : " << mainDua() << endl;
    cout << "6. Variabel local main() : " << x << endl;
    
    cout << "7. Variabel local main() : " << x << endl;
    {
        cout << "8. Variabel local main() : " << x << endl;
        int x = 55; // variable local block
        cout << "9. Variabel local block : " << x << endl;
        cout << "10. Variabel global : " << ::x << endl;
    }
    cout << "11. Variabel local main() : " << x << endl;
    return 0;
}