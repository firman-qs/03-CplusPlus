#include <iostream>
using namespace std;

int main()
{
    cout << "Operasi Komparasi" << endl;

    float a = 9.5;
    int b = 9;
    bool hasil1, hasil2, hasil3, hasil4, hasil5, hasil6;

    cout << "jika a = " << a << " dan b = " << b << endl;
    // sebanding/sama dengan
    hasil1 = (a == b);
    // tidak sebanding/tidak sama dengan
    hasil2 = (a != b);
    // kurang dari
    hasil3 = (a < b);
    // lebih dari
    hasil4 = (a > b);
    // kurang dari atau sama dengan
    hasil5 = (a <= b);
    // lebih dari atau sama dengan
    hasil6 = (a >= b);

    // tampilkan
    cout << "a == b \t: " << hasil1 << endl;
    cout << "a != b \t: " << hasil2 << endl;
    cout << "a < b \t: " << hasil3 << endl;
    cout << "a > b \t: " << hasil4 << endl;
    cout << "a <= b \t: " << hasil5 << endl;
    cout << "a >= b \t: " << hasil6 << endl;

    return 0;
}
