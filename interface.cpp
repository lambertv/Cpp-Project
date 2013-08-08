//like options and stuff?
#include "interface.h"
#include "event.h"
#include "character.h"
#include <iostream>

Interface::Interface()
{
    num_opt = 0;
    Event options[15];
}

void Interface::add_option(Event opt)
{
    options[num_opt] = opt;
    num_opt++;
}

void Interface::del_option(Event opt)
{
    bool found = false;
    for (int i = 0; i < num_opt; i++) 
    {
        if (found)
        {
            options[i-1] = options[i];
        }
        else if (options[i] == opt)
        {
            found = true; 
        }
    }
    if (found)
    {
        num_opt--;
    }
}

void Interface::display_options()
{
    for (int i = 0; i < num_opt; i++)
    {
        std::cout << i << ": " << options[i].get_title() << std::endl;
    }
}

Character Interface::perform_option(Event opt, Character c)
{
    c.add_hp(opt.get_hp_growth());
    c.add_strength(opt.get_str_growth());
    return c;
}

Character Interface::perform_option(int i, Character c)
{
    c.add_hp(options[i].get_hp_growth());
    c.add_strength(options[i].get_str_growth());
    return c;
}

Event Interface::return_option(int i)
{
    return options[i];
}

