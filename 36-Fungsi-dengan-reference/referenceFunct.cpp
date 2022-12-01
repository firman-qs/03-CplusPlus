#include <iostream>
using namespace std;

void kuadrat(int &);

int main() {
    int a = 3;
    cout << "Nilai a adalah \t\t\t: " << a << endl;
    cout << "adress a adalah \t\t: " << &a << endl;
    kuadrat(a);
    cout << "kuadrat dari a adalah \t\t: " << a << endl;
    cout << "adress dari kuadrat a adalah \t: " << &a << endl;

    /* code */
    return 0;
}

void kuadrat(int &b) {
    b *= b;
}