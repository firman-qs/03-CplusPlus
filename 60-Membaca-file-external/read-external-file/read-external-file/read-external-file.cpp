// read-external-file.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream my_file;
    my_file.open("data.txt", std::ios::in);

    std::string baca_data, data;

    // membaca file s.d. baris dengan kata "data saya"
    std::cout << "========== membaca file sampai baris tertentu ==========\n";
    while (!(baca_data=="data saya")) {
        std::getline(my_file, baca_data);
        data.append("\n" + baca_data);
    }
    std::cout << data << std::endl;
    
    /*my_file.close();
    my_file.open("data.txt", std::ios::in);*/

    std::cout << "\n========== membaca file sampai baris terakhir ==========\n";
    while (!(my_file.eof())) {
        std::getline(my_file, baca_data);
        data.append("\n" + baca_data);
    }

    std::cout << data << std::endl;

    std::cout << "\nprogram selesai.\n";
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
