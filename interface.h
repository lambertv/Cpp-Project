//blop
#include "event.h"
#include "character.h"
#ifndef INTERFACE_H_
#define INTERFACE_H_

class Interface
{
private:
    Event options[15];
    int num_opt;
public:
    Interface();
    void add_option(Event opt);
    void del_option(Event opt);
    void display_options();
    Character perform_option(Event opt, Character c);
    Character perform_option(int i, Character c);
    Event return_option(int i);
};

#endif
