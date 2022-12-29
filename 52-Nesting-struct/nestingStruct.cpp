// copyright 2022 <just to pass linter>
#include <iostream>
#include <string>

struct ability {
  std::string spell_satu, spell_dua, spell_tiga, spell_ultimate;
};

struct hero {
  std::string nama_hero;
  int basic_hitPoint;
  ability spell;
};

int main() {
  // nesting structu
  hero am;
  am.nama_hero = "Anti Mage";
  am.basic_hitPoint = 540;
  am.spell.spell_satu = "Mana Burn";
  am.spell.spell_dua = "Blink";
  am.spell.spell_tiga = "Counterspell";
  am.spell.spell_ultimate = "Mana Void";

  std::cout << am.spell.spell_ultimate << "\n";

  return 0;
}
