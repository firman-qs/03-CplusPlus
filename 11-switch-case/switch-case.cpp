#include <iostream>

using namespace std;

int main() {
	cout << "=== Tes Switch Case === \nMasukkan angka : ";
	
	int a;
	cin >> a;
	
	switch (a) {
		case 1: 
			cout << "a = 1" << endl;
			break;
		case 2: 
			cout << "a = 2" << endl;
		case 3: 
			cout << "a = 3" << endl;
		case 4: 
			cout << "a = 4" << endl;
		case 5: 
			cout << "a = 5" << endl;
		default: 
			cout << "Nilai Default" << endl;
	}

	cout << "=== Selesai ===" << endl;

	return 0;
}
