#include <iostream>
#include "Clock.h"

using namespace std;

void Clock::tick() {
    if (second == 60) {
        if (minute == 60) {
            hour++;
            minute = 0;
            second = 0;
        } else {
            minute++;
            second = 0;
        }
    } else {
        second++;
    }
}

void Clock::getTime() const {
    cout << hour << " hours, " << minute << " minutes, " << second << " seconds." << endl;
}
