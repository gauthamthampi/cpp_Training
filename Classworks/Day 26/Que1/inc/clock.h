#pragma once
class Clock {
private:
    int second;
    int minute;
    int hour;

public:
    void tick();         
    void getTime() const; 
};

