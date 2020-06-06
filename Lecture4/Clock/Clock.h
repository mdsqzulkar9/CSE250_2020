#ifndef CLOCK_CLOCK_H
#define CLOCK_CLOCK_H


class Clock {

public:
    // Set time
    void set_clock(int hr, int min, int sec);

    // Get time
    int get_hours() const;

    int get_minutes() const;

    int get_seconds() const;

    void tick();

private:
    int hours;
    int minutes;
    int seconds;
};

//#include "Clock.cpp"

#endif //CLOCK_CLOCK_H

