#include <iostream>
#include <array>
#include <algorithm>

const size_t arraySize = 5; 

void printArr(std::array<int, arraySize> angka, bool ketemu, int cari) { 
  std::cout << "Kumpulan Angka : [ ";
  for (int num : angka) { 
    std::cout << num << " "; 
  } 
  std::cout << "]" << "\n"; 
  
  std::cout << "cari angka : ";
  std::cin >> cari;
  
  ketemu = std::binary_search(angka.begin(), angka.end(), cari);
  std::cout << "\n";
  if (ketemu) {
    std::cout << "Angka "<< cari << " ada di dalam array" << std::endl;  
  } else {
    std::cout << "Angka "<< cari << " tidak ada di dalam array" << std::endl;  
  }
}

int main ()
{   
  std::cout << "\nHello World\n";
  std::array<int, arraySize> angka = {1,2,3,4,5}; 
  int cari;
  bool ketemu = false;
  std::sort(angka.begin(), angka.end()); 

  printArr(angka, ketemu, cari);
  
  std::cout << std::endl;

  return 0;
}
