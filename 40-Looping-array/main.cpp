#include <array>
#include <iostream>
using namespace std;

int main() {
    // just system clear & welcome
    system("clear");
    cout << "Hello Looping Array" << endl;

    // main code
    // looping untuk Array mulai di implementasikan pada c++ versi 11 keatas
    // int nilaiArray[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    array<int, 10> nilaiArray = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int nilai : nilaiArray) {
        cout << "adress : " << &nilai << " nilainya : " << nilai << endl;
    }
    cout << endl;

    // manipulasi dengan mengubah nilai array asli
    for (int &nilai : nilaiArray) {
        nilai *= 2;
        cout << "adress : " << &nilai << " nilainya : " << nilai << endl;
    }
    cout << endl;

    for (int nilai : nilaiArray) {
        cout << "adress : " << &nilai << " nilainya : " << nilai << endl;
    }
    cout << endl;

    return 0;
}
