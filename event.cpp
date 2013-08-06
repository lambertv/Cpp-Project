//erm... yeah..
#include "event.h"
#include <iostream>
#include <string>

Event::Event(const std::string nm)
{
    title = nm;
    hp_growth = 0;
    str_growth = 0;
}

Event::Event()
{
    title = "no title";
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

std::string Event::get_title()
{
    return title;
}

bool Event::operator==(const Event & t) const
{
    return (title == t.title);
}
