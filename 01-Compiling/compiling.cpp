#include <iostream>

// Keluarkan objective file => g++ -E fileCpp.cpp > objectiveFile.p
int tambah(int a, int b);
int main()
{
    #include "include.cpp"
    // int artinya tipe data integer
    // main sebagai gerbang utama program
    std::cout << "Ini Halaman Compiling "  << tambah(5,4)  << std::endl;
    // std::cin.get();
    // std adalah standart library yang berasal dari iostream
    // cout = console out
    return 0;
}