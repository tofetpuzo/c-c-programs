#include "Date.h"
#include "Date_impl.h"
#include <iostream>


Date::Date(int d, int m, int y){
    // pImpl = new Date_impl(d, m, y); // allocate in constructor
    pImpl = std::make_unique<Date_impl>(d, m, y); // using smart pointer
}

Date::~Date() = default; // default destructor with unique_ptr
Date::Date(Date&&) noexcept = default; // default move constructor
Date& Date::operator=(Date&&) noexcept = default; // default move assignment

// Date::~Date() { delete pImpl; }

void Date::set_date(int d) { pImpl->set_date(d); }

void Date::print() { pImpl->print(); }
