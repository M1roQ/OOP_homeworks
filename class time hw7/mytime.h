#pragma once

#include <iostream>
#include <stdexcept> 
#include <memory> 

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
};

class Clock {
protected:
    Time time;
    bool is24HourFormat;

public:
    Clock() : is24HourFormat(true) {
        std::cout << "Clock constructor called" << std::endl;
    }

    virtual void ShowTime() const = 0;
    virtual ~Clock() {
        std::cout << "Clock destructor called" << std::endl;
    }

    void SetTime(const Time& t) {
        time = t;
    }

    void Set24HourFormat(bool is24Hour) {
        is24HourFormat = is24Hour;
    }
};

class SimpleWatch {
public:
    void ShowTime(const Time& t) {
        std::cout << "Time: " << t << std::endl;
    }

    void SetTime(Time& t, const Time& newTime) {
        t = newTime;
    }
};

class WallClock : public Clock {
public:
    WallClock() {
        std::cout << "WallClock constructor called" << std::endl;
    }

    void ShowTime() const override {
        std::cout << "WallClock shows time: ";
        time.PrintTime();
    }

    ~WallClock() {
        std::cout << "WallClock destructor called" << std::endl;
    }
};

class Watch : public Clock {
public:
    Watch() {
        std::cout << "Watch constructor called" << std::endl;
    }

    void ShowTime() const override {
        std::cout << "Watch shows time: ";
        time.PrintTime();
    }

    ~Watch() {
        std::cout << "Watch destructor called" << std::endl;
    }
};

class SmartWatch : public Watch {
public:
    SmartWatch() {
        std::cout << "SmartWatch constructor called" << std::endl;
    }

    void ShowTime() const override {
        std::cout << "SmartWatch shows time: ";
        time.PrintTime();
    }

    ~SmartWatch() {
        std::cout << "SmartWatch destructor called" << std::endl;
    }
};

class CuckooClock : public Clock {
public:
    CuckooClock() {
        std::cout << "CuckooClock constructor called" << std::endl;
    }

    void ShowTime() const override {
        std::cout << "CuckooClock shows time: ";
        time.PrintTime();
        std::cout << "Cuckoo! Cuckoo!" << std::endl;
    }

    ~CuckooClock() {
        std::cout << "CuckooClock destructor called" << std::endl;
    }
};
