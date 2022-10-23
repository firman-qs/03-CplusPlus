#include <iostream>
using namespace std;

int main()
{
    int a = 9;
    int b = 7;
    int hasil;
    cout << "jika a = " << a << " dan b = " << b << endl;

    // Penjumlahan
    hasil = a + b;
    cout << "a + b = " << hasil << endl;

    // Pengurangan
    hasil = a - b;
    cout << "a - b = " << hasil << endl;

    // Perkalian
    hasil = a * b;
    cout << "a * b = " << hasil << endl;

    // Modulus
    hasil = a % b;
    cout << "a % b = " << hasil << endl;

    // Pembagian
    int c = a;
    float d = b;
    float hasil2;
    hasil2 = c / d;
    cout << "a / b = " << hasil2 << endl;

    // Urutan eksekusi seperti biasa. => () => * or / => + or -

    return 0;
}