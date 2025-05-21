#pragma once
class Clock {
private:
    int second=0;
    int minute=0;
    int hour=0;

public:
    void tick();         
    void getTime() const; 
};

