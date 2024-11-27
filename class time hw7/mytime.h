#pragma once

#include <iostream>
#include <stdexcept>  // Для std::invalid_argument
#include <memory>      // Для умных указателей

class SimpleWatch;  // Forward declaration
class Watch;        // Forward declaration

class Time {
    int hours;
    int minutes;
    int seconds;

    static int objectCount;

    void Normalize();

public:
    Time();  // Конструктор по умолчанию
    Time(int h, int m, int s);  // Параметризированный конструктор
    Time(const Time& t);  // Конструктор копирования

    int GetHours() const noexcept;
    int GetMinutes() const noexcept;
    int GetSeconds() const noexcept;

    void PrintTime() const noexcept;

    int ToSeconds() const noexcept;

    Time& operator=(const Time& other) noexcept;
    Time& operator+=(int s) noexcept;
    Time& operator-=(int s) noexcept;

    friend Time operator+(const Time& t, int s);
    friend Time operator-(const Time& t, int s);

    friend bool operator==(const Time& t1, const Time& t2);

    friend std::ostream& operator<<(std::ostream& out, const Time& t);
    friend std::istream& operator>>(std::istream& in, Time& t);

    static int GetObjectCount();

    ~Time();  // Деструктор

    friend class SimpleWatch;  // SimpleWatch имеет доступ к приватным членам класса Time
    friend class Watch;        // Watch имеет доступ к приватным членам класса Time
};

class SimpleWatch {
public:
    void ShowTime(const Time& t) const;
    void SetTime(Time& t, int h, int m, int s) const;
};

class Watch {
    bool is24HourFormat;  // True для 24-часового формата, False для 12-часового формата

public:
    Watch() : is24HourFormat(true) {}

    void ShowTime(const Time& t) const;
    void SetTime(Time& t, int h, int m, int s) const;
    void ToggleFormat() { is24HourFormat = !is24HourFormat; }
};
