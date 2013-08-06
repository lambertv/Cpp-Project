//blop
#include "event.h"
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
    Event return_option(int i);
};

#endif
