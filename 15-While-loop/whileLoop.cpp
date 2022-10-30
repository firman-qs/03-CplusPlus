#include <iostream>
using namespace std;

int main()
{
    string a = "*";
    int b = 1;
    while (b <= 10)
    {
        cout << a << endl;
        a += "**";
        b += 2;
    }

    return 0;
}