#include <iostream>
#include <stdexcept>
#include "mytime.h"

int main() {
    Time t(23, 59, 5); 
    std::cout << "Initial time: " << std::endl;
    t.PrintTime(); 

    SimpleWatch sw;
    sw.ShowTime(t);
    sw.SetTime(t, 10, 20, 30);
    std::cout << "Time after SimpleWatch set: " << std::endl;
    sw.ShowTime(t);

    Watch w;
    w.ShowTime(t);
    w.SetTime(t, 17, 45, 0);
    std::cout << "Time after Watch set (24-hour format): " << std::endl;
    w.ShowTime(t);
    
    w.ToggleFormat();
    std::cout << "Time after Watch set (12-hour format): " << std::endl;
    w.ShowTime(t);

    return 0;
}
