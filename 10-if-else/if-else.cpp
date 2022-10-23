#include <iostream>

using namespace std;

int main() {
	
	cout << "Masukkan angka 1, 2, 3, atau lainnya :";
	
	int a;
	cin >> a;

	if (a == 1) {
		cout << "yang anda masukkan adalah angka 1" << endl;
	} else if (a == 2) {
		cout << "yang anda masukkan adalah angka 2" << endl;
	} else if (a == 3) {
		cout << "yang anda masukkan adalah angka 3" << endl;
	} else {
		cout << "yang anda masukkan bukan angka 1, 2, atau 3" << endl;
	}

	cout << "Program Selesai" << endl;

	return 0;
	
}