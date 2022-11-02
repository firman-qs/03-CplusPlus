#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    cout << "-------------------------" << endl;
    cout << "1. Segitiga Siku Siku (a)" << endl;
    string bintang = "*";
    for (int i = 1; i < n; i++)
    {
        /* code */
        cout << bintang << endl;
        bintang += "*";
    }

    cout << "-------------------------" << endl;
    cout << "2. Segitiga Siku Siku (b)" << endl;
    string bintang2 = "*", spasi;
    for (int i = n; i > 1; i--)
    {
        spasi = "";
        for (int j = i; j > 1; j--)
        {
            spasi += "  ";
        }
        cout << spasi << bintang2 << endl;
        bintang2 += "**";
    }

    cout << "-------------------------" << endl;
    cout << "3. Segitiga Siku Siku (c)" << endl;
    string bintang3;
    for (int i = n; i > 1; i--)
    {
        bintang3 = "";
        for (int j = i; j > 1; j--)
        {
            bintang3 += "*";
        }
        cout << bintang3 << endl;
    }

    cout << "-------------------------" << endl;
    cout << "4. Segitiga Siku Siku (d)" << endl;
    string bintang4, spasi2 = " ";
    for (int i = n; i > 1; i--)
    {
        bintang4 = "";
        for (int j = i; j > 1; j--)
        {
            bintang4 += "*";
        }
        cout << spasi2 << bintang4 << endl;
        spasi2 += " ";
    }

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