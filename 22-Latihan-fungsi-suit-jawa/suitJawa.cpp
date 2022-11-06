#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    string user, comp;
    int x = rand() % 1000;
    cout << "pilih => gajah, orang, semut : ";
    cin >> user;

    if (x <= 333) {
        comp = "gajah";
    } else if (666 >= x > 333) {
        comp = "orang";
    } else {
        comp = "semut";
    }
    cout << "komputer memilih : " << comp << endl;

    if (comp == "gajah") {
        if (comp == user) {
            cout << "Imbang Coba lagee !" << endl;
        } else if (user == "orang") {
            cout << "Kamu Kalah !" << endl;
        } else {
            cout << "Kamu Menang !" << endl;
        }
    } else if (comp == "orang") {
        if (comp == user) {
            cout << "Imbang Coba lagee !" << endl;
        } else if (user == "gajah") {
            cout << "Kamu Menang !" << endl;
        } else {
            cout << "Kamu Kalah !" << endl;
        }
    } else if (comp == "semut") {
        if (comp == user) {
            cout << "Imbang Coba lagee !" << endl;
        } else if (user == "orang") {
            cout << "Kamu Menang !" << endl;
        } else {
            cout << "Kamu Kalah !" << endl;
        }
    }
}