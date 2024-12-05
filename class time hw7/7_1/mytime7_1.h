#pragma once

#include <iostream>

class Time {
    int hours;
    int minutes;
    int seconds;

    static int objectCount;

    void Normalize();

public:
    Time();
    Time(int h, int m, int s);
    Time(const Time& t);

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

    ~Time();

    friend class SimpleWatch;
    friend class Watch;
};

class SimpleWatch {
public:
    void ShowTime(const Time& t) const;
    void SetTime(Time& t, int h, int m, int s);
};

class Watch {
    bool is24HourFormat;

public:
    Watch();
    void Set24HourFormat(bool is24Hour);
    void ShowTime(const Time& t) const;
    void SetTime(Time& t, int h, int m, int s);
};
