#include <iostream>
using namespace std;
// Using double for
int main()
{
    int n = 10;
    cout << "-------------------------" << endl;
    cout << "1. Segitiga Siku Siku (a)" << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "-------------------------" << endl;
    cout << "2. Segitiga Siku Siku (b)" << endl;
    for (int i = n; i > 1; i--)
    {
        for (int j = i; j > 1; j--)
        {
            cout << " ";
        }
        for (int k = i; k <= n; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "-------------------------" << endl;
    cout << "3. Segitiga Siku Siku (c)" << endl;
    for (int i = n; i > 1; i--)
    {
        for (int j = i; j > 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "-------------------------" << endl;
    cout << "4. Segitiga Siku Siku (d)" << endl;
    for (int i = n; i > 1; i--)
    {
        for (int k = i; k <= n; k++)
        {
            cout << " ";
        }

        for (int j = i; j > 1; j--)
        {
            cout << "+";
        }
        cout << endl;
    }

    string bintang2, spasi;
    cout << "-------------------------" << endl;
    cout << "5. Segitiga Sama Sisi" << endl;
    bintang2 = "*";
    for (int i = n; i > 1; i--)
    {
        spasi = "";
        for (int j = i; j > 1; j--)
        {
            spasi += " ";
        }
        cout << spasi << bintang2 << endl;
        bintang2 += "**";
    }

   
    return 0;
}