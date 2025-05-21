#include <iostream>
#include "Clock.h"

int main() {
    Clock c;

    for (int i = 0; i < 61; ++i) {
        c.tick();
    }

    c.getTime();
    return 0;
}
