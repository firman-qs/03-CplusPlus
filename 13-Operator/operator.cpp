#include <bitset>
#include <iostream>

using namespace std;

int main() {
    cout << "---------------------------------------------------------" << endl;
    cout << "Halo, Ini Compound Operator (Assignment + aritmatika) C++\n"
         << endl;
    int a = 9, b = 11;
    cout << "nilai awal dari a : " << a << " dan b : " << b << endl;
    a += 3;
    cout << "ditambah 3 menjadi : " << a << endl;
    a -= 3;
    cout << "dikurangi 3 menjadi : " << a << endl;
    a /= 3;
    cout << "dibagi 3 menjadi : " << a << endl;
    a *= 3;
    cout << "dikali 3 menjadi : " << a << endl;

    cout << "\n----------------------------------------" << endl;
    cout << "Ini Bit Shift dan Bitwise Assignment C++\n"
         << endl;
    cout << "Nilai awal dari b adalah : " << b << endl;
    bitset<8> binerB(b);
    cout << "bentuk biner dari b adalah : " << binerB << endl;

    b <<= 1;
    binerB = bitset<8>(b);
    cout << "Biner b di-shift-left(1) menjadi : " << binerB << " atau " << b << endl;

    b >>= 1;
    binerB = bitset<8>(b);
    cout << "Biner b di-shift-right(1) menjadi : " << binerB << " atau " << b << endl;

    b &= 13;
    binerB = bitset<8>(b);
    cout << "Biner b AND 13 menjadi : " << binerB << " atau " << b << endl;

    b |= 6;
    binerB = bitset<8>(b);
    cout << "Biner b OR 6 menjadi : " << binerB << " atau " << b << endl;

    b ^= 255;
    binerB = bitset<8>(b);
    cout << "Biner b XOR 255 menjadi : " << binerB << " atau " << b << endl;

    return 0;
}
