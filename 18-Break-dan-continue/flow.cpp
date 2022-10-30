#include <iostream>
using namespace std;

int main()
{
    // Program bilangan prima
    int a, b, c, d, total;
    bool prima;
    cout << "Selamat Datang di Program Bilangan Prima\nMencari bilangan prima" << endl;

    cout << "Masukkan batas awal : ";
    cin >> a;
    cout << "Masukkan batas akhir : ";
    cin >> b;
    cout << "Masukkan batas jumlah : ";
    cin >> c;
    cout << "Masukkan batas pengecualian : ";
    cin >> d;

    total = 1;
    for (int i = a; i <= b; i++)
    {
        prima = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prima = 0;
            }
        }
        if (prima == 1)
        {
            if (total > c)
            {
                break;
            }
            if (i == d)
            {
                continue;
            }
            /* code */
            cout << i << endl;
            total += 1;
        }
    }

    return 0;
}