#include <iostream>

using namespace std;

int main()
{
	float a, b, hasil = 0;
	char operasi;

	cout << "\nSelamat Datang di Kalkulator" << endl;
	cout << "Masukkan angka pertama : ";
	cin >> a;
	cout << "Masukkan operator (+, -, *, /) : ";
	cin >> operasi;
	cout << "Masukkan angka kedua : ";
	cin >> b;

	if (operasi == '+')
	{
		hasil = a + b;
	}
	else if (operasi == '-')
	{
		hasil = a - b;
	}
	else if (operasi == '*')
	{
		hasil = a * b;
	}
	else if (operasi == '/')
	{
		hasil = a / b;
	}
	else
	{
		cout << "Tidak diketahui (Operator anda Salah)" << endl;
	}

	cout << "hasil dari " << a << " " << operasi << " " << b << " = " << hasil << endl;

	return 0;
}