//whaaaaaaa

#include "character.h"

int main()
{
    Character char1("Foo");
    char1.show_stats();
    char1.set_name("Bar");
    char1.add_hp(100);
    char1.show_stats();
    char1.add_hp(-50);
    char1.show_stats();
    char1.add_strength(25);
    char1.show_stats();
    char1.add_strength(25);
    char1.show_stats();
}
