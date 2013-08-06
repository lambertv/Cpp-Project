//stats for character?
#include <iostream>
#include <cstring>
#include "character.h"

Character::Character(const char * nm)
{
    hp = 50;
    strength = 0;
    std::strncpy(name, nm, 29);
    name[29] = '\0';
}

void Character::set_name(const char * nm)
{
    std::strncpy(name, nm, 29);
    name[29] = '\0';
}

void Character::add_hp(int num)
{
    hp += num;
}

void Character::add_strength(int num)
{
    strength += num;
}

void Character::show_stats()
{
    using std::cout;
    using std::endl;
    cout << endl << name << endl;
    cout << "HP:       " << hp << endl;
    cout << "STRENGTH: " << strength << endl;
}
