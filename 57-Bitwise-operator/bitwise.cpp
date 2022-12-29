#include <bitset>
#include <iostream>
#include <string>

using std::cout, std::string;

// funcsi mengampilkan bilangan biner
std::bitset<8> biner(int bilangan_bulat)
{
    return std::bitset<8>(bilangan_bulat);
}

int main()
{
    system("cls");

    unsigned short a = 22; // 01100011
    unsigned short b = 29; // 01100011

    // NOT
    cout << "angka : " << a << ", biner: " << biner(a) << "\n";
    cout << "--------------------------- ~" << "\n";
    cout << "a    = " << (~a) << ", biner: " << biner(~a) << "\n\n\n";

    // AND
    cout << "angka : " << a << ", biner: " << biner(a) << "\n";
    cout << "angka : " << b << ", biner: " << biner(b) << "\n";
    cout << "--------------------------- &" << "\n";
    cout << "a & b = " << (a&b) << ", biner: " << biner(a&b) << "\n\n\n";

    // OR
    cout << "angka : " << a << ", biner: " << biner(a) << "\n";
    cout << "angka : " << b << ", biner: " << biner(b) << "\n";
    cout << "--------------------------- |" << "\n";
    cout << "a | b = " << (a|b) << ", biner: " << biner(a|b) << "\n\n\n";

    // XOR
    cout << "angka : " << a << ", biner: " << biner(a) << "\n";
    cout << "angka : " << b << ", biner: " << biner(b) << "\n";
    cout << "--------------------------- ^" << "\n";
    cout << "a ^ b = " << (a^b) << ", biner: " << biner(a^b) << "\n\n\n";
    
    // SHL
    cout << "angka    : " << a << ", biner: " << biner(a) << "\n";
    cout << "--------------------------- <<" << "\n";
    cout << "a ShL(2) = " << (a<<2) << ", biner: " << biner(a<<2) << "\n\n\n";
   
    // SHR
    cout << "angka    : " << a << ", biner: " << biner(a) << "\n";
    cout << "--------------------------- >>" << "\n";
    cout << "a ShR(2)  = " << (a>>2) << ", biner: " << biner(a>>2) << "\n\n\n";

    return 0;
}

/* BITWISE OPERATOR
1. NOT  : ~
2. AND  : &
3. OR   : |
4. XOR  : ^
5. SHIFT to LEFT : <<
6. SHIFT to RIGHT : >>
*/