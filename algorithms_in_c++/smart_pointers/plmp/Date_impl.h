#ifndef DATE_IMPL_H
#define DATE_IMPL_H

#include "Date.h"
#include <iostream>

class Date_impl {
    int day;
    int month;
    int year;
public:
    Date_impl(int d, int m, int y) : day(d), month(m), year(y) {}
    void set_date(int d) { day = d;}
    void print(){ std::cout << "Date: " << day << "/" << month << "/" << year << std::endl;}
};

#endif // DATE_IMPL_H