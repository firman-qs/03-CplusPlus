#include <iostream>
#include <string>

using std::cout, std::cin, std::endl, std::getline, std::ws, std::string;

int main() {
    // // Perbandingan char
    // char kata[4] = {'u', 'c', 'u', 'p'};
    // char pembanding[4] = {'u', 'c', 'u', 'p'};
    // int yg_sama = 0;
    // // dibandingkan per-karakter (tidak bisa langsung/perbandingan antar array dianggap false)
    // for (int i = 0; i < 4; i++) {
    //     if (kata[i] == pembanding[i]) {
    //         yg_sama++;
    //         if (yg_sama == 4) {
    //             cout << "berhasil";
    //         }

    //     } else {
    //         cout << "gagal \n";
    //         break;
    //     }
    // }

    // perbandingan string
    string nama_rahasia = "ucup surucup";
    string nama_tebakan;
    while (true) {
        cout << "======== Tebak Nama =======\n";
        cout << "masukkan nama tebakan : ";
        getline(cin >> ws, nama_tebakan);
        // komparasi string
        if (nama_rahasia == nama_tebakan) {
            cout << "Tebakan anda benar!, namanya adalah: " << nama_rahasia << "\n\n";
            break;
        }
        cout << "Tebakan anda salah!, namanya bukan: " << nama_tebakan << "\n\n";
    }

    return 0;
}
