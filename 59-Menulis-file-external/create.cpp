// input and output stream
#include <iostream>
// file stream
#include <fstream> // ofstream (output stream), ifstream (input stream), fstream (gabungan input dan output stream)

int main()
{
    std::ofstream file_saya;

    /* BEBERAPA MODE
    std::ios::out ==> default, operasi output menuliskan/mereplace file;
    std::ios::app ==> append (tambahkan di barir baru) file;
    std::ios::trunc ==> default, operasi output membuat file jika belum ada dan menuliskan/mereplace file jika sudah ada;
    */

    file_saya.open("Output_1.txt", std::ios::out);
    // file_saya.open("Output_1.txt", ios::trunc); // kode ini equivalen dengan kode sebelumnya
    file_saya << "Menuliskan data pada Ouput 1\n";
    file_saya.close();

    file_saya.open("Output_2.txt", std::ios::trunc);
    // file_saya.open("Output_1.txt", ios::trunc); // kode ini equivalen dengan kode sebelumnya
    file_saya << "Menuliskan data pada Ouput 2\n";
    file_saya.close();

    file_saya.open("Output_3.txt", std::ios::app);
    // file_saya.open("Output_1.txt", ios::trunc); // kode ini equivalen dengan kode sebelumnya
    file_saya << "Menuliskan data pada Ouput 3\n";
    file_saya.close();

    return 0;
}
