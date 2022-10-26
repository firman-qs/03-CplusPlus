#include <iostream>
#include <limits>

using namespace std;

int main()
{
    // Tipe data Integer
    cout << "========= INTEGER =========" << endl;
    int a = 1;
    cout << "size \t : " << sizeof(a) << " byte" << endl;
    cout << "max \t : " << numeric_limits<int>::max() << endl;
    cout << "min \t : " << numeric_limits<int>::min() << endl;

    // Tipe data Unsigned Integer
    cout << "\n========= UNSIGNED INTEGER =========" << endl;
    unsigned int b = 1;
    cout << "size \t : " << sizeof(b) << " byte" << endl;
    cout << "max \t : " << numeric_limits<unsigned int>::max() << endl;
    cout << "min \t : " << numeric_limits<unsigned int>::min() << endl;

    // Tipe data short
    cout << "\n========= SHORT =========" << endl;
    short c = 1;
    cout << "size \t : " << sizeof(c) << " byte" << endl;
    cout << "max \t : " << numeric_limits<short>::max() << endl;
    cout << "min \t : " << numeric_limits<short>::min() << endl;

    // Tipe data long
    cout << "\n========= LONG =========" << endl;
    long d = 1;
    cout << "size \t : " << sizeof(d) << " byte" << endl;
    cout << "max \t : " << numeric_limits<long>::max() << endl;
    cout << "min \t : " << numeric_limits<long>::min() << endl;

    // Tipe data float
    cout << "\n========= FLOAT =========" << endl;
    float e = 12.88;
    cout << "size \t : " << sizeof(e) << " byte" << endl;
    cout << "max \t : " << numeric_limits<float>::max() << endl;
    cout << "min \t : " << numeric_limits<float>::min() << endl;

    // Tipe data float
    cout << "\n========= DOUBLE =========" << endl;
    double f = 11.98;
    cout << "size \t : " << sizeof(f) << " byte" << endl;
    cout << "max \t : " << numeric_limits<double>::max() << endl;
    cout << "min \t : " << numeric_limits<double>::min() << endl;

    // Tipe data char
    cout << "\n========= CHAR =========" << endl;
    char g = 'z';
    cout << g << endl;
    cout << "size \t : " << sizeof(g) << " byte" << endl;
    cout << "max \t : " << numeric_limits<char>::max() << endl;
    cout << "min \t : " << numeric_limits<char>::min() << endl;

    // Tipe data boolean
    cout << "\n========= BOOLEAN =========" << endl;
    bool h = true; // true or false
    cout << "size \t : " << sizeof(h) << " byte" << endl;
    cout << "max \t : " << numeric_limits<bool>::max() << endl;
    cout << "min \t : " << numeric_limits<bool>::min() << endl;

    return 0;
}
