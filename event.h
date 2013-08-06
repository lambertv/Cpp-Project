//header for event
#ifndef EVENT_H_
#define EVENT_H_

class Event
{
private:
    char title[30];
    int hp_growth;
    int str_growth;
public:
    Event(const char * nm);
    void change_hp_growth(int new_amount);
    void change_str_growth(int new_amount);
    int get_hp_growth();
    int get_str_growth();
};
#endif
