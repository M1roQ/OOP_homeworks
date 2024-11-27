#include <iostream>
#include "mytime.h"

int main() {
    Time t(10, 15, 30);

    WallClock wallClock;
    wallClock.SetTime(t);
    wallClock.ShowTime();

    Watch watch;
    watch.SetTime(t);
    watch.ShowTime();

    SmartWatch smartWatch;
    smartWatch.SetTime(t);
    smartWatch.ShowTime();

    CuckooClock cuckooClock;
    cuckooClock.SetTime(t);
    cuckooClock.ShowTime();

    SimpleWatch simpleWatch;
    simpleWatch.ShowTime(t);
    
    return 0;
}
