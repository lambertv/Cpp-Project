//whaaaaaaa

#include "character.h"
#include "event.h"
#include "interface.h"
#include <iostream>

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
    char1.show_stats();
    Interface in;
    in.add_option(eat);
    Event train("Train");
    train.change_str_growth(10);
    in.add_option(train);
    in.display_options();
    std::cout << in.return_option(0).get_title() << std::endl;
    std::cout << in.return_option(1).get_title() << std::endl;
    in.del_option(eat);
    in.display_options();
}
