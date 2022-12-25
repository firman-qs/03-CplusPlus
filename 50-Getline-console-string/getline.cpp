#include <iostream>
#include <string>

using namespace std;

// fungsi hitung_kata
void hitung_kata(string kalimat);

int main() {
    // getline(mode, assign_ke_variabel_ini)
    // Penghitung jumlah kata
    cout << "Program Penghitung Jumlah Kata\n";
    string kalimat_input;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat_input);
    hitung_kata(kalimat_input);
    return 0;
}

void hitung_kata(string kalimat) {
    int indeks = 0;
    int jumlah_kata = 0;
    while (true) {
        indeks = kalimat.find(" ", indeks + 1);
        jumlah_kata++;
        if (indeks == -1) {
            break;
        }
    }
    int jumlah_huruf = kalimat.length();
    cout << "jumlah kata: " << jumlah_kata << " | Jumlah huruf: " << jumlah_huruf << "\n";
}
