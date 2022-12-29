// copyright 2022 <just to pass linter>
#include <iostream>
#include <string>

// using namespace std;

/*
STRUCT:
    Data yang dibentuk oleh beberapa data
*/

struct hero {
  std::string name;
  std::string main_attribute;
  int basic_health;
  bool attack_ranged;
};

int main() {
  // hero dota 2
  hero quop;
  quop.name = "Queen of Pain";
  quop.main_attribute = "intelligence";
  quop.basic_health = 540;
  quop.attack_ranged = true;

  std::cout << "Name          : " << quop.name << std::endl;
  std::cout << "Attribute     : " << quop.main_attribute << std::endl;
  std::cout << "Basic health  : " << quop.basic_health << std::endl;
  std::cout << "Hero ranged ? : " << quop.attack_ranged << std::endl;

  return 0;
}
