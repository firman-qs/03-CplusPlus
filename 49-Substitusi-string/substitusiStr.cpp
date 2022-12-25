#include <iostream>
#include <string>

using namespace std;

int main() {
    system("cls");

    // membuat string_kalimat
    string kalimat_1 = "Pada induktor, arus tertinggal oleh tegangan sebesar pi/2";
    string kalimat_2 = "Pada kapasitor, arus mendahului tegangan sebesar pi/2";

    // menampilkan string_kalimat
    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl;

    // swap string
    cout << "\n<===== swap string =====>" << endl;
    kalimat_1.swap(kalimat_2);  // string_variabel_1.swap(string_variable_2)
    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl;

    // replace strin ==> str_variabel.replace(indeks, panjang, pengganti)
    cout << "\n<===== replace string =====>" << endl;
    kalimat_1.replace(kalimat_1.find("pi/2"), 4, "1/4 siklus");  // replace pi/2 dengan 1/4 siklus
    kalimat_2.replace(kalimat_2.find("pi/2"), 4, "1/4 siklus");  // replace pi/2 dengan 1/4 siklus
    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl;

    // insert string => insert(indeks, yang_ditambahkan)
    cout << "\n<===== insert string =====>" << endl;
    kalimat_1.insert(kalimat_1.find("1/4"), "pi/2 atau ");  // replace pi/2 dengan 1/4 siklus
    kalimat_2.insert(kalimat_2.find("1/4"), "pi/2 atau ");  // replace pi/2 dengan 1/4 siklus
    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl;


    return 0;
}
