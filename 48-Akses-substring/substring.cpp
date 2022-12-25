#include <iostream>
#include <string>
#include <vector>  // mirip array, dipelajari nanti

using namespace std;

int main() {
    system("cls");

    string kalimat_1 = "Benda akan tetap diam atau bergerak dengan kecepatan konstan";
    string kalimat_2 = "Benda yang dikenai gaya \'F\' akan memiliki percepatan yang sebanding \'a\'";

    cout << "Hukum I Newton  : \"" << kalimat_1 << "\" \n";
    cout << "Hukum II Newton : \"" << kalimat_2 << "\" \n\n";

    // substring, mengambiil bagian dari string
    // string_variabel.substr(index, panjang)
    // ambil kata "diam" dari kalimat_1
    cout << kalimat_1.substr(17, 4) << endl;
    // ambil kata "gaya 'F'" dari kalimat_1 (spasi dihitung)
    cout << kalimat_2.substr(19, 8) << endl;

    // mencari posisi dari substring
    // string_variabel.find("substring-nya")
    cout << "\nposisi dari kata : \'" << kalimat_1.substr(17, 4) << "\' adalah pada indeks : [" << kalimat_1.find("diam") << "]" << endl;
    cout << "posisi dari kata : \'" << kalimat_2.substr(24, 3) << "\' adalah pada indeks : [" << kalimat_2.find("\'F\'") << "]" << endl;

    // mencari posisi dari kata yang jumlahnya lebih dari satu
    // terdapat beberapa substring "an" pada kalimat_1 ==> ak'an'=>[8], deng'an'=>[40], kecepat'an'=>[50], konst'an'=>[58]
    // ambil kata "substring"  pertama,kedua,ketiga ==> string_variabel.find("an",indeks_awal_pencarian)
    string kata_yang_dicari = "an";
    int indeks = 0;
    vector<int> kumpulan_indeks;

    // cari bertahap
    for (int i = 0; i < kalimat_1.size(); i++) {
        if (indeks >= kalimat_1.size() - 2) {
            break;
        }
        indeks = kalimat_1.find(kata_yang_dicari, indeks + 1);
        kumpulan_indeks.push_back(indeks);
    }

    // tampilkan
    cout << "\nkata \'" << kata_yang_dicari << "\' terdapat pada indeks ke : [ ";
    for (int indeks : kumpulan_indeks) {
        cout << indeks << " ";
    }
    cout << "]\n\n";

    return 0;
}
