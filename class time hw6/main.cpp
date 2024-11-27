#include <iostream>
#include <stdexcept>
#include "mytime.h"

int main() {
    // Исходные проверки
    Time t(23, -10, 5); 
    std::cout << "t: " << std::endl;
    t.PrintTime(); 

    t += 3600;
    std::cout << "t + 1h: " << std::endl;
    t.PrintTime();

    t -= 3661;
    std::cout << "t - 1h 1s: " << std::endl;
    t.PrintTime();

    std::cout << "Seconds since start of day: " << t.ToSeconds() << std::endl;

    Time t2(23, 49, 5);
    std::cout << "t2: " << std::endl;
    t2.PrintTime();

    t2 = t;
    std::cout << "t2 = t: " << std::endl;
    t2.PrintTime();

    Time t3;
    t3 = t2 - 10800;
    std::cout << "t3 = t2 - 3h: " << std::endl;
    t3.PrintTime();

    std::cout << "t = t2? " << (t == t2 ? "Yes" : "No") << std::endl;
    std::cout << "t2 = t3? " << (t2 == t3 ? "Yes" : "No") << std::endl;

    std::cout << "Final object count before exiting main: " << Time::GetObjectCount() << std::endl;

    // Дополнительные проверки с исключениями
    try {
        Time t1(-1, 30, 45);  // Исключение: время не может быть отрицательным
    } catch (const std::invalid_argument& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    try {
        Time t2(10, 25, 30);
        std::cout << "Time created: ";
        t2.PrintTime();
        t2 = Time(30, -60, 10);  // Исключение: некорректные значения
    } catch (const std::invalid_argument& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    try {
        Time t3(12, 60, 0);  // Не будет выбрасывать исключение, будет нормализовано
        std::cout << "Normalized time: ";
        t3.PrintTime();
    } catch (const std::invalid_argument& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    try {
        Time t4(23, 59, 59);
        t4 += 3600;  // добавляем 1 час
        std::cout << "Time after addition: ";
        t4.PrintTime();
    } catch (const std::invalid_argument& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}