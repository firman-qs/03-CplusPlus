#include <iostream>
#include <string>


struct spell {
	std::string first_spell;
	std::string second_spell;
	std::string third_spell;
	std::string ultimate_spell;
};

struct hero {
	std::string nama_hero;
	int basic_hp;
	spell ability;
};


int main()
{
	hero am;
	am.nama_hero = "Aunti Mage";
	am.basic_hp = 530;
	am.ability.first_spell = "Mana burn";
	am.ability.second_spell = "Blink";
	am.ability.third_spell = "Counterspell";
	am.ability.ultimate_spell = "Mana void";
}
