//header for event
#include <string>
#ifndef EVENT_H_
#define EVENT_H_

class Event
{
private:
    std::string title;
    int hp_growth;
    int str_growth;
public:
    Event(const std::string nm);
    Event();
    void change_hp_growth(int new_amount);
    void change_str_growth(int new_amount);
    int get_hp_growth();
    int get_str_growth();
    std::string get_title();
    bool operator==(const Event & t) const;
};
#endif
