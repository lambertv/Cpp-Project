//whaaaaaaa

#include "character.h"
#include "event.h"
#include "interface.h"
#include <string>
#include <sstream>
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
    
    std::string str_opt;
    int int_opt;
    while (true)
    {
        char1.show_stats();
        in.display_options();
        std::getline(std::cin, str_opt);
        if (!str_opt.compare("q"))
        {
            std::cout << "Bye!\n";
            break;
        }
        std::stringstream convert(str_opt);
        if ( !(convert >> int_opt) )
            int_opt = 0;
        char1 = in.perform_option(int_opt-1, char1);
    }
        
}
