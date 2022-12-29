// 58-Casting.cpp : Casting adalah mengubah tipe data
//

#include <iostream>

int main()
{
    int bilangan_bulat = 18;
    float bilangan_desimal = 6.23;

    // implicit casting (di belakang layar, hasil dikonversi kedalam float)
    std::cout << bilangan_bulat / bilangan_desimal << std::endl;
    // kode di atas, di belakang layar ekuivalen dengan
    std::cout << (int)bilangan_bulat / bilangan_desimal << std::endl;

    // jika ingin menampilkan hasil ke dalam int maka
    std::cout << (int)(bilangan_bulat / bilangan_desimal) << std::endl;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
