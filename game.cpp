//whaaaaaaa

#include "character.h"
#include "event.h"

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
    Event eat("Eat");
    eat.change_hp_growth(5);
    char1.add_hp(eat.get_hp_growth()*5);
    char1.show_stats();
}
