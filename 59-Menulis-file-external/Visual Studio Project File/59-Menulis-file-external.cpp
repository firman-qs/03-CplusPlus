// 59-Menulis-file-external.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> // input output stream
#include <fstream> // file stream ==> ofstream = output stream, ifstream = input stream, campuran keduanya = fstream

int main()
{
    std::cout << "Menulis File External...\n";
    
    std::ofstream my_file;
    my_file.open("output.txt");
    my_file << "Hello World\n";
    my_file.close();

    std::cout << "Selesai\n";


    return 0;
}
