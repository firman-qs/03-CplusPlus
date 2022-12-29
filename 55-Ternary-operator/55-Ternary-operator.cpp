// 55-Ternary-operator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
	std::cout << "Ternary Operator\n";

	int a, b;
	std::string output, hasil_1, hasil_2;

	a = 9;
	b = 7;

	hasil_1 = (a > 1) ? "benar dan a lebih dari 1" : "benar dan a adalah 1 atau kurang dari 1";
	hasil_2 = "Salah !";

	output = (a < b) ? hasil_1 : hasil_2;

	std::cout << "============= Start =============" << "\n";
	std::cout << output << "\n";
	std::cout << "============= End =============" << "\n";

	return 0;
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
