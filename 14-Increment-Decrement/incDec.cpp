#include <iostream>
using namespace std;

int main()
{
    /*
    INCREMENT DAN DECREMENT
    1. preIncrement dan postIncrement
    2. preDecrement dan postDecrement
    */

    int a = 5, b = 5;

    cout << "preIncrement \n"
         << a << endl;
    cout << ++a << endl;
    cout << a << endl;

    // postIncrement
    cout << "\npostIncrement \n"
         << b << endl;
    cout << b++ << endl;
    cout << b << endl;
}