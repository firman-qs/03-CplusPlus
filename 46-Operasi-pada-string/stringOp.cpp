#include <iostream>
#include <string>

// using namespace std;

int main() {
    // system("cls");

    // string
    std::string kata("Visuel");
    // menampilkan data string
    std::cout << kata << "\n";
    // mengambil karakter string berdasarkan indeks
    for (size_t i = 0; i < 6; i++) {
        std::cout << "kata[" << i << "] : " << kata[i] << "\n";
    }

    // merubah karakter pada string berdasarkan indeks
    kata[4] = 'a';
    std::cout << kata << "\n";

    // concatenation (menggabungkan) string
    // cara 1 (langsung saat membuat variabel)
    std::string kata2(kata + " Studio");
    std::cout << kata2 << "\n";

    // cara 2 (dengan append)
    std::string kata3(" Code");
    kata2.append(kata3);
    std::cout << kata2 << "\n";

    // cara 3 (dengan assignment operator)
    std::string kata4(" VSCode");
    kata2 += kata4 + "j😁";
    std::cout << kata2 << "\n";

    // std::cout << "abd" << "dca" << std::endl;
    return 0;
}
