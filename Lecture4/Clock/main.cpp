#include <iostream>
#include "Clock.h"

using namespace std;


int main() {

    Clock new_york_time;

    new_york_time.set_clock(1,58,59);

    new_york_time.tick();
    new_york_time.tick();
    new_york_time.tick();
    new_york_time.tick();

    cout << new_york_time.get_hours() << ":" << new_york_time.get_minutes() << ":" <<new_york_time.get_seconds()<< endl;




    return 0;
}
