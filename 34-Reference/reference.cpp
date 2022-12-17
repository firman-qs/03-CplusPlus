#include <iostream>
using namespace std;

int main() {
	// REFERENCE
	// membuat alias untuk variabel
	// beberapa variabel mengakses memory yang sama

	int a = 10;
	cout << " nilai dari a = " << a << endl;
	cout << "adress dari a = " << &a << endl << endl;

	int &b = a;
	cout << " nilai dari b = " << b << endl;
	cout << "adress dari b = " << &b << endl << endl;

	a = 12;
	cout << " nilai dari a = " << a << endl;
	cout << " nilai dari b = " << b << endl << endl;

	b = 9;
	cout << " nilai dari a = " << a << endl;
	cout << " nilai dari b = " << b << endl;
	return 0;
}
