// copyright 2022 <just to pass linter>
#include <iostream>
#include <string>

using namespace std;

// enum ==> tipe data dengan value fix (sesuai yang diisi)
enum warna { merah, kuning, hijau, biru = 4, hitam, putih };

int main() {
  warna payung = hijau;
  // akan mengeluarkan angka "2" (indes dari warna hijau)
  cout << payung << endl;

  warna baju = hitam;
  // akan mengeluarkan angka "5"
  cout << baju << endl;

  return 0;
}
