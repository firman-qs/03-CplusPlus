// 56-Comma-operator.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

float luas_lingkaran(float diameter)
{ // fungsi menghitung luas lingkaran
    float luas = M_PI * pow(diameter / 2, 2);
    return (luas);
}

int main()
{ // program menghitung luas tabung
    system("cls");
    float diameter, tinggi, luas_alas, volume;
    // Comma Operator
    volume = (diameter = 2, tinggi = 5, luas_alas = luas_lingkaran(diameter), (luas_alas * tinggi));
    std::cout << volume << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add
//   Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project
//   and select the .sln file
