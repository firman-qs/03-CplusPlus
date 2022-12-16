#include <iostream>
using namespace std;

void fungsi(int *);
void kuadrat(int *);

int main() 
{
	int a = 10;
	cout << "  Nilai dari a : " << a << endl;
	cout << "Address dari a : " << &a << endl;
	fungsi(&a);
	kuadrat(&a);
	cout << "Nilai dari a^2 : " << a << endl;
	cout << "Address dari a : " << &a << endl;
	return 0;
}

void fungsi(int *valuePtr) {
	cout << "  Nilai dari b : " << *valuePtr << endl; // dereferencing
	cout << "Address dari b : " << valuePtr << endl;
}

void kuadrat(int *valuePtr) {
	*valuePtr = (*valuePtr) * (*valuePtr);
}
