#include <iostream>
#include <string>

using std::cout, std::cin, std::endl, std::string, std::getline, std::ws;

int main(int argc, char const *argv[])
{
    /* pengenalan string */
    // string merupakan kumpulan char

    // membuat char dengan array string
    // char kata[5] = {'m','o','b','i','l'}; 
    // membuat string cara 1
    // string kata("mobil mobil");
    // membuat string cara 2
    string kata;
    cout << "Hello String \n";
    cout << "-------------------------\n"; 
    cout << "Masukkan kata : ";
    // support input kata dengan spasi
    getline(cin >> ws, kata);
    cout << kata << "\n";
    


    return 0;
}
