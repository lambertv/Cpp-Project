//stats for character?
#ifndef CHARACTER_H_
#define CHARACTER_H_

class Character 
{
private:
    char name[30]; 
    int hp;
    int strength;
public:
    Character(const char * nm);
    void set_name(const char * nm);
    void add_hp(int num);
    void add_strength(int num);
    void show_stats();
};

#endif

