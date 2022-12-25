#include <iostream>
#include <string>

using namespace std;

/*
STRUCT:
    Data yang dibentuk oleh beberapa data
*/

struct hero {
    string name;
    string main_attribute;
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

    cout << "Name          : " << quop.name << endl;
    cout << "Attribute     : " << quop.main_attribute << endl;
    cout << "Basic health  : " << quop.basic_health << endl;
    cout << "Hero ranged ? : " << quop.attack_ranged << endl;

    return 0;
}
