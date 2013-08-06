//erm... yeah..
#include "event.h"
#include <iostream>
#include <cstring>

Event::Event(const char * nm)
{
    std::strncpy(title, nm, 29);
    title[29] = '\0';
    hp_growth = 0;
    str_growth = 0;
}

void Event::change_hp_growth(int new_amount)
{
    hp_growth = new_amount;
}

void Event::change_str_growth(int new_amount)
{
    str_growth = new_amount;
}

int Event::get_hp_growth()
{
    return hp_growth;
}

int Event::get_str_growth()
{
    return str_growth;
}
