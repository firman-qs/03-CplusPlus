// copyright 2022 <just to pass linter>
#include <iostream>
#include <string>
using namespace std;
/*
struct ==> satu data beberapa componen
union ==> satu data beberapa bentuk
          beberapa tipe data berbeda yang dialokasikan kedalam blok memory
          yang
sama
*/
union tipe
{
    int number_int;
    float number_float;
    double number_double;
    char number_inChar[4];
};

int main()
{
    system("cls");
    tipe angka;

    // assign value
    angka.number_int = 10;

    // tampilkan address, size, dan value;
    cout << angka.number_int << endl;
    cout << angka.number_float << endl;
    cout << angka.number_double << endl;
    cout << angka.number_inChar << endl;
    return 0;
}
